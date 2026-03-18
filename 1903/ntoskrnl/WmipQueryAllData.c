/*
 * XREFs of WmipQueryAllData @ 0x140669254
 * Callers:
 *     WmipIoControl @ 0x140668340 (WmipIoControl.c)
 *     IoWMIQueryAllData @ 0x140785820 (IoWMIQueryAllData.c)
 *     WmipQueryAllDataMultiple @ 0x1408F0EF8 (WmipQueryAllDataMultiple.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObReferenceObjectByPointer @ 0x140086CA0 (ObReferenceObjectByPointer.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     WmipPrepareForWnodeAD @ 0x1406686BC (WmipPrepareForWnodeAD.c)
 *     WmipInsertStaticNames @ 0x140668FE4 (WmipInsertStaticNames.c)
 *     WmipStaticInstanceNameSize @ 0x1406691CC (WmipStaticInstanceNameSize.c)
 *     WmipUnreferenceEntry @ 0x140669758 (WmipUnreferenceEntry.c)
 *     WmipForwardWmiIrp @ 0x14066982C (WmipForwardWmiIrp.c)
 *     WmipSendWmiIrp @ 0x140711938 (WmipSendWmiIrp.c)
 */

__int64 __fastcall WmipQueryAllData(PVOID Object, IRP *a2, KPROCESSOR_MODE a3, __int64 a4, unsigned int a5, _DWORD *a6)
{
  PVOID v7; // rdi
  __int64 v8; // r14
  NTSTATUS v9; // eax
  int v10; // esi
  int v11; // eax
  unsigned int v12; // ebx
  char v13; // r9
  unsigned int v14; // ecx
  char v15; // r15
  _BYTE *v16; // r13
  _BYTE *v17; // rdx
  unsigned int v18; // r12d
  __int128 v19; // xmm6
  _BYTE *v20; // r14
  __int64 *v21; // rcx
  int v22; // r13d
  __int64 v23; // rax
  _BYTE *v24; // rdi
  char *v25; // rax
  __int64 v26; // rdx
  IRP *v27; // rax
  int v28; // eax
  unsigned int *v29; // rax
  unsigned int v30; // edx
  unsigned int v31; // ecx
  bool v32; // zf
  unsigned int v34; // eax
  unsigned int v35; // edi
  int v36; // eax
  unsigned int v37; // ecx
  unsigned int v38; // eax
  __int128 v39; // xmm0
  char v40; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v41; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v42; // [rsp+40h] [rbp-C8h]
  PVOID v43; // [rsp+48h] [rbp-C0h] BYREF
  char *v44; // [rsp+50h] [rbp-B8h]
  _BYTE *v45; // [rsp+58h] [rbp-B0h]
  PVOID P; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+68h] [rbp-A0h]
  _BYTE v48[24]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE *v49; // [rsp+88h] [rbp-80h]
  PIRP Irp; // [rsp+90h] [rbp-78h]
  __int64 v51; // [rsp+98h] [rbp-70h]
  _BYTE v52[80]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v53[128]; // [rsp+F8h] [rbp-10h] BYREF

  Irp = a2;
  v7 = Object;
  v43 = Object;
  v51 = a4;
  v8 = a4;
  *(_OWORD *)v48 = (unsigned __int64)a6;
  memset(v52, 0, 0x48uLL);
  *(_QWORD *)&v48[16] = 0LL;
  if ( v7 )
  {
    v9 = ObReferenceObjectByPointer(v7, 1u, WmipGuidObjectType, a3);
  }
  else
  {
    v9 = ObReferenceObjectByHandle(*(HANDLE *)(v8 + 16), 1u, WmipGuidObjectType, a3, &v43, 0LL);
    v7 = v43;
  }
  v10 = v9;
  if ( v9 < 0 )
    return (unsigned int)v10;
  v41 = 16;
  P = v53;
  v10 = WmipPrepareForWnodeAD((__int64)v7, &v48[8], (int *)&v41, (__int64 *)&P, &v40);
  if ( v10 < 0 )
    goto LABEL_39;
  v11 = *(_DWORD *)(v8 + 44);
  LODWORD(v42) = v11;
  if ( v40 )
  {
    *(_DWORD *)(v8 + 12) = 0;
    v39 = *(_OWORD *)&v48[8];
    *(_DWORD *)(v8 + 44) = v11 | 0x100;
    v10 = 0;
    *(_OWORD *)(v8 + 24) = v39;
    *a6 = 48;
    goto LABEL_39;
  }
  v12 = 0;
  v49 = 0LL;
  v13 = 0;
  v14 = a5;
  v15 = 0;
  v16 = P;
  v17 = (_BYTE *)v8;
  v45 = (_BYTE *)v8;
  v18 = a5;
  v40 = 0;
  v10 = -1073741163;
  if ( !v41 )
    goto LABEL_34;
  v19 = *(_OWORD *)&v48[8];
  v20 = v49;
  v21 = (__int64 *)P;
  v22 = v42;
  v44 = (char *)P;
  v47 = v41;
  do
  {
    v23 = *v21;
    v42 = *v21;
    if ( v15 || v13 || v18 < 0x48 )
    {
      v18 = 72;
      v24 = v52;
      memset(v52, 0, 0x48uLL);
      v23 = v42;
      v40 = 1;
    }
    else
    {
      v24 = v17;
    }
    *(_DWORD *)v24 = 48;
    v41 = *(_DWORD *)(v23 + 16) & 3;
    v25 = v44;
    *((_DWORD *)v24 + 11) = v22 | (v41 != 0 ? 0x80 : 0);
    *(_OWORD *)(v24 + 24) = v19;
    v26 = *(unsigned int *)(*(_QWORD *)v25 + 80LL);
    *((_DWORD *)v24 + 3) = 0;
    v27 = Irp;
    *((_DWORD *)v24 + 1) = v26;
    if ( v27 )
      v28 = WmipForwardWmiIrp(v27, v18, (__int64)v24);
    else
      v28 = WmipSendWmiIrp(0LL, v26, v24 + 24, v18, v24, &v48[8]);
    *((_DWORD *)v24 + 1) = 0;
    if ( v28 >= 0 )
    {
      if ( (*((_DWORD *)v24 + 11) & 0x20) != 0 )
      {
        if ( *((_DWORD *)v24 + 12) <= v18 )
          v28 = -1073741823;
      }
      else if ( !*((_DWORD *)v24 + 13) )
      {
        v28 = -1073741163;
      }
      if ( v28 >= 0 )
      {
        if ( (*((_DWORD *)v24 + 11) & 0x20) != 0 )
        {
          v34 = *((_DWORD *)v24 + 12);
        }
        else
        {
          if ( !v40 )
          {
            if ( v20 )
              *((_DWORD *)v20 + 3) = (_DWORD)v24 - (_DWORD)v20;
            v20 = v24;
            if ( v41 )
            {
              WmipInsertStaticNames((unsigned int *)v24, v18, v42);
              if ( (*((_DWORD *)v24 + 11) & 0x20) != 0 )
              {
                v15 = 1;
                v29 = (unsigned int *)(v24 + 48);
              }
              else
              {
                v29 = (unsigned int *)v24;
              }
              v30 = *v29;
            }
            else
            {
              v30 = *(_DWORD *)v24;
            }
            v31 = (v30 + 7) & 0xFFFFFFF8;
            if ( v30 + 7 < v30 )
              v31 = v30;
            v12 += v31;
            if ( !v15 && v18 >= v31 )
            {
              v18 -= v31;
              v45 += v31;
              goto LABEL_32;
            }
            goto LABEL_54;
          }
          v34 = *(_DWORD *)v24;
        }
        if ( v34 < 0x48 )
          v34 = 72;
        v35 = v34 + v12;
        if ( v41 )
        {
          v36 = WmipStaticInstanceNameSize(v42);
          v37 = (v35 + 3) & 0xFFFFFFFC;
          if ( v35 + 3 < v35 )
            v37 = v35;
          v35 = v37 + v36;
        }
        v12 = (v35 + 7) & 0xFFFFFFF8;
        if ( v35 + 7 < v35 )
          v12 = v35;
LABEL_54:
        v15 = 1;
      }
    }
LABEL_32:
    WmipUnreferenceEntry(&WmipISChunkInfo, v42);
    v13 = v40;
    v21 = (__int64 *)(v44 + 8);
    v32 = v47-- == 1;
    v17 = v45;
    v44 += 8;
  }
  while ( !v32 );
  v8 = v51;
  v16 = P;
  v7 = v43;
  v14 = a5;
LABEL_34:
  if ( v12 )
  {
    if ( v15 )
    {
      v38 = v14 + 64;
      *(_DWORD *)(v8 + 44) = 32;
      *(_DWORD *)v8 = 56;
      if ( v12 > v14 )
        v38 = v12;
      *(_DWORD *)(v8 + 48) = v38;
      **(_DWORD **)v48 = 56;
    }
    else
    {
      **(_DWORD **)v48 = v12;
    }
    v10 = 0;
  }
  if ( v16 != v53 && v16 )
    ExFreePoolWithTag(v16, 0);
LABEL_39:
  ObfDereferenceObject(v7);
  return (unsigned int)v10;
}
