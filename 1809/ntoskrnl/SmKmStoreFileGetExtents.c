/*
 * XREFs of SmKmStoreFileGetExtents @ 0x1408AF048
 * Callers:
 *     SmKmStoreFileCreate @ 0x1408AE8B0 (SmKmStoreFileCreate.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     IoSetThreadHardErrorMode @ 0x1400EEDD0 (IoSetThreadHardErrorMode.c)
 *     SmArrayGrow @ 0x140158428 (SmArrayGrow.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwFsControlFile @ 0x1401B8A10 (ZwFsControlFile.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SmKmStoreFileGetExtents(
        HANDLE FileHandle,
        __int64 a2,
        _QWORD *a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        int a7,
        _DWORD *a8,
        struct _PRIVILEGE_SET **a9,
        unsigned int *a10)
{
  __int64 v10; // r15
  unsigned int v12; // r12d
  struct _PRIVILEGE_SET *v15; // rsi
  BOOLEAN v16; // r14
  __int64 *v17; // rbx
  NTSTATUS Status; // edi
  int v19; // r14d
  __int64 v20; // r10
  unsigned int v21; // edi
  __int64 v22; // r11
  unsigned int v23; // ecx
  __int64 v24; // r9
  unsigned __int64 v25; // r12
  int v26; // eax
  __int64 v27; // rcx
  BOOLEAN v29; // [rsp+50h] [rbp-79h]
  PVOID P; // [rsp+58h] [rbp-71h] BYREF
  int v31; // [rsp+60h] [rbp-69h]
  unsigned int v32; // [rsp+64h] [rbp-65h]
  unsigned int v33; // [rsp+68h] [rbp-61h] BYREF
  struct _PRIVILEGE_SET *v34; // [rsp+70h] [rbp-59h] BYREF
  __int64 v35; // [rsp+78h] [rbp-51h]
  _DWORD *v36; // [rsp+80h] [rbp-49h]
  struct _PRIVILEGE_SET **v37; // [rsp+88h] [rbp-41h]
  unsigned int *v38; // [rsp+90h] [rbp-39h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-31h] BYREF
  _QWORD v40[4]; // [rsp+A8h] [rbp-21h] BYREF

  v10 = 0LL;
  v36 = a8;
  v12 = 0x10000;
  v37 = a9;
  v38 = a10;
  v32 = a4;
  v15 = 0LL;
  v31 = 0x10000;
  P = 0LL;
  v34 = 0LL;
  v16 = IoSetThreadHardErrorMode(0);
  v29 = v16;
  if ( a7 )
  {
    memset(v40, 0, sizeof(v40));
    v17 = v40;
    v40[0] = *a3;
    P = v40;
  }
  else
  {
    Status = ZwFsControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x9003Bu, a3, 8u, &P, 8u);
    if ( Status == 259 )
    {
      KeWaitForSingleObject((PVOID)(a2 + 152), Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    v17 = (__int64 *)P;
    if ( Status < 0 )
      goto LABEL_28;
  }
  v33 = 0;
  v19 = 0;
  v20 = *v17;
  v21 = 0;
  if ( *v17 )
  {
    while ( 1 )
    {
      v22 = v17[1];
      v10 += v20;
      if ( v22 < 0 )
        break;
      if ( v12 )
      {
        v23 = v20;
        if ( v20 >= v12 )
          v23 = v12;
        v22 += v23;
        v31 = v12 - v23;
        v20 -= v23;
        v17[1] = v22;
        *v17 = v20;
      }
      if ( v20 >= v32 )
      {
        v24 = a5 - ((a5 - 1) & (v22 + a5 - 1LL));
        v35 = v24 + v22 - 1;
        v25 = (v20 + 1 - v24) / (unsigned __int64)v32;
        if ( (_DWORD)v25 )
        {
          v26 = SmArrayGrow(v21, (v20 + 1 - v24) % (unsigned __int64)v32, &v33, (const void **)&v34);
          v15 = v34;
          if ( !v26 )
          {
            Status = -1073741670;
            goto LABEL_23;
          }
          v19 += v25;
          v27 = 2LL * v21++;
          *((_QWORD *)&v34->Privilege[0].Luid + v27) = v35;
          *(&v15->PrivilegeCount + 2 * v27) = v25;
        }
      }
      v17 += 2;
      v20 = *v17;
      if ( !*v17 )
      {
        v17 = (__int64 *)P;
        goto LABEL_20;
      }
      v12 = v31;
    }
    Status = -1073741453;
LABEL_23:
    v17 = (__int64 *)P;
  }
  else
  {
LABEL_20:
    if ( v10 >= *a3 )
    {
      if ( v19 )
      {
        *v36 = v19;
        *v37 = v15;
        v15 = 0LL;
        *v38 = v21;
        Status = 0;
      }
      else
      {
        Status = -1073741672;
      }
    }
    else
    {
      Status = -1073741453;
    }
  }
  v16 = v29;
LABEL_28:
  if ( v17 && v17 != v40 )
    ExFreePoolWithTag(v17, 0);
  if ( v15 )
    CmSiFreeMemory(v15);
  IoSetThreadHardErrorMode(v16);
  return (unsigned int)Status;
}
