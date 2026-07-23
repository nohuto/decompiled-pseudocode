/*
 * XREFs of DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x140902768
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x1406D3A20 (DrvDbDispatchDriverDatabase.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     _RegRtlQueryValue @ 0x1405C89A8 (_RegRtlQueryValue.c)
 *     DrvDbOpenObjectRegKey @ 0x1406D3F18 (DrvDbOpenObjectRegKey.c)
 *     DrvDbFindDatabaseNode @ 0x1406D4E18 (DrvDbFindDatabaseNode.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140754CAC (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbGetCompositeMappedPropertyKeys @ 0x140902600 (DrvDbGetCompositeMappedPropertyKeys.c)
 */

__int64 __fastcall DrvDbGetDriverDatabaseMappedPropertyKeys(
        __int64 a1,
        const WCHAR *a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int *v6; // r12
  unsigned int v7; // r15d
  unsigned int v8; // ebp
  const WCHAR *v9; // r14
  HANDLE v10; // r13
  __int64 v11; // rdi
  __int64 v12; // rbx
  unsigned int v13; // esi
  __int64 result; // rax
  __int64 v15; // r9
  __int64 v16; // rdx
  signed int v17; // ebx
  HANDLE v18; // rax
  _UNKNOWN **v19; // r14
  unsigned int v20; // r13d
  const WCHAR *v21; // rdx
  signed int Value; // eax
  _OWORD *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // edx
  unsigned int v27; // ecx
  int v28; // eax
  unsigned int v29; // r14d
  _UNKNOWN **v30; // rsi
  const WCHAR *v31; // rdx
  signed int v32; // eax
  _OWORD *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rcx
  unsigned int v36; // edx
  int v37; // eax
  unsigned int v38; // ecx
  __int64 v39; // [rsp+20h] [rbp-88h]
  unsigned int *v40; // [rsp+28h] [rbp-80h]
  __int64 v41; // [rsp+28h] [rbp-80h]
  const UNICODE_STRING *v42; // [rsp+48h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-58h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-50h] BYREF
  HANDLE v45; // [rsp+60h] [rbp-48h]

  v6 = (unsigned int *)a6;
  v7 = 0;
  v8 = a5;
  v9 = a2;
  v40 = (unsigned int *)a6;
  v10 = a3;
  v42 = 0LL;
  Handle = 0LL;
  v11 = a4;
  KeyHandle = 0LL;
  v12 = a1;
  *(_DWORD *)a6 = 0;
  v13 = 0;
  result = DrvDbGetCompositeMappedPropertyKeys(a1, (_OWORD **)&off_140401390, 5u, a4, a5, v40);
  if ( (int)result < 0 )
    return result;
  v16 = *v6;
  if ( (_DWORD)v16 )
  {
    if ( v15 )
      v11 = v15 + 20 * v16;
    v8 = a5 - v16;
  }
  result = DrvDbFindDatabaseNode(v12, v9, &v42);
  if ( (int)result < 0 )
    return result;
  if ( ((__int64)v42[3].Buffer & 0x10) == 0 )
    goto LABEL_31;
  LOBYTE(v41) = 0;
  LODWORD(v39) = 1;
  v17 = DrvDbOpenObjectRegKey((_QWORD *)v12, *(_QWORD **)(v12 + 32), 1u, v9, v39, v41, &KeyHandle, 0LL);
  if ( v17 < 0 )
    goto LABEL_48;
  v18 = KeyHandle;
  v19 = &off_140357500;
  v45 = KeyHandle;
  v20 = 0;
  while ( 1 )
  {
    v21 = (const WCHAR *)v19[2];
    LODWORD(a6) = 0;
    Value = RegRtlQueryValue(v18, v21, 0LL, 0LL, (unsigned int *)&a6);
    v17 = Value;
    if ( Value == -1073741772 )
    {
      v17 = 0;
      goto LABEL_20;
    }
    if ( Value && Value != -1073741789 )
    {
LABEL_21:
      v7 = 0;
      goto LABEL_22;
    }
    if ( v11 && v20 < v8 )
    {
      v23 = *v19;
      v24 = v20++;
      v25 = 5 * v24;
      *(_OWORD *)(v11 + 4 * v25) = *(_OWORD *)*v19;
      *(_DWORD *)(v11 + 4 * v25 + 16) = *((_DWORD *)v23 + 4);
    }
    v26 = v13 + 1;
    v27 = v13;
    v28 = -1;
    if ( v13 + 1 >= v13 )
      v28 = v13 + 1;
    v13 = v28;
    v17 = v26 < v27 ? 0xC0000095 : 0;
    if ( v26 < v27 )
      break;
LABEL_20:
    v18 = v45;
    ++v7;
    v19 += 5;
    if ( v7 >= 2 )
      goto LABEL_21;
  }
  v7 = 0;
  v13 = 0;
LABEL_22:
  if ( v17 < 0 )
    goto LABEL_48;
  if ( v13 )
  {
    if ( v11 )
      v11 += 20LL * v13;
    v8 -= v13;
  }
  if ( ((__int64)v42[3].Buffer & 4) != 0 )
  {
    v17 = 0;
    goto LABEL_48;
  }
  v12 = a1;
  v9 = a2;
  v10 = a3;
LABEL_31:
  if ( !v10 )
  {
    v17 = DrvDbOpenDriverDatabaseRegKey((const UNICODE_STRING **)v12, v9, 1u, 0, (__int64)&Handle, 0LL);
    if ( v17 < 0 )
      goto LABEL_48;
    v10 = Handle;
  }
  v29 = 0;
  v30 = &off_1403544A0;
  while ( 2 )
  {
    v31 = (const WCHAR *)v30[2];
    LODWORD(a6) = 0;
    v32 = RegRtlQueryValue(v10, v31, 0LL, 0LL, (unsigned int *)&a6);
    v17 = v32;
    if ( v32 == -1073741772 )
    {
      v17 = 0;
LABEL_45:
      ++v7;
      v30 += 5;
      if ( v7 >= 0xC )
        goto LABEL_48;
      continue;
    }
    break;
  }
  if ( v32 && v32 != -1073741789 )
    goto LABEL_48;
  if ( v11 && v29 < v8 )
  {
    v33 = *v30;
    v34 = v29++;
    v35 = 5 * v34;
    *(_OWORD *)(v11 + 4 * v35) = *(_OWORD *)*v30;
    *(_DWORD *)(v11 + 4 * v35 + 16) = *((_DWORD *)v33 + 4);
  }
  v36 = *v6;
  v37 = -1;
  v38 = *v6 + 1;
  if ( v38 >= *v6 )
    v37 = *v6 + 1;
  v17 = v38 < v36 ? 0xC0000095 : 0;
  *v6 = v37;
  if ( v38 >= v36 )
    goto LABEL_45;
  *v6 = 0;
LABEL_48:
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v17;
}
