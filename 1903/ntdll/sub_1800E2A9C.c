/*
 * XREFs of sub_1800E2A9C @ 0x1800E2A9C
 * Callers:
 *     LdrResSearchResource @ 0x180056760 (LdrResSearchResource.c)
 * Callees:
 *     RtlLcidToLocaleName @ 0x180016AF0 (RtlLcidToLocaleName.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_1800575E0 @ 0x1800575E0 (sub_1800575E0.c)
 *     sub_180058950 @ 0x180058950 (sub_180058950.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800E0820 @ 0x1800E0820 (sub_1800E0820.c)
 *     sub_1800E2500 @ 0x1800E2500 (sub_1800E2500.c)
 *     sub_1800E29E8 @ 0x1800E29E8 (sub_1800E29E8.c)
 *     sub_1800E319C @ 0x1800E319C (sub_1800E319C.c)
 */

__int64 __fastcall sub_1800E2A9C(
        __int64 a1,
        int a2,
        __int64 *a3,
        unsigned int a4,
        unsigned __int64 *a5,
        _QWORD *a6,
        void *a7,
        __int64 a8)
{
  __int16 v8; // di
  __int64 v10; // r13
  __int64 v11; // rcx
  int v12; // ebx
  __int64 result; // rax
  int v14; // edi
  __int64 Heap; // rax
  unsigned int v16; // edi
  unsigned int v17; // ebx
  int v18; // ecx
  unsigned __int16 v19; // cx
  unsigned int v20; // r15d
  unsigned int v21; // r14d
  _DWORD *v22; // rbx
  int v23; // edx
  unsigned int v24; // ecx
  unsigned __int64 v25; // r14
  __int64 v26; // r15
  _DWORD *v27; // r15
  __int64 v28; // r14
  int v29; // [rsp+70h] [rbp-4C8h]
  unsigned __int16 v30; // [rsp+74h] [rbp-4C4h] BYREF
  __int64 v31[2]; // [rsp+78h] [rbp-4C0h] BYREF
  int v32; // [rsp+88h] [rbp-4B0h]
  unsigned int v33; // [rsp+8Ch] [rbp-4ACh]
  int v34; // [rsp+90h] [rbp-4A8h]
  __int64 v35; // [rsp+98h] [rbp-4A0h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-498h]
  __int64 *v37; // [rsp+A8h] [rbp-490h]
  void *v38; // [rsp+B0h] [rbp-488h]
  _QWORD *v39; // [rsp+B8h] [rbp-480h]
  unsigned __int64 *v40; // [rsp+C0h] [rbp-478h]
  __int64 v41; // [rsp+C8h] [rbp-470h]
  int v42; // [rsp+D0h] [rbp-468h] BYREF
  const wchar_t *v43; // [rsp+D8h] [rbp-460h]
  char v44[2]; // [rsp+E0h] [rbp-458h] BYREF
  __int16 v45; // [rsp+E2h] [rbp-456h]
  _WORD *v46; // [rsp+E8h] [rbp-450h]
  int v47; // [rsp+F0h] [rbp-448h] BYREF
  __int16 v48; // [rsp+F4h] [rbp-444h]
  unsigned __int16 v49; // [rsp+F6h] [rbp-442h]
  unsigned __int16 v50; // [rsp+104h] [rbp-434h]
  __int16 v51; // [rsp+108h] [rbp-430h]
  unsigned int v52; // [rsp+164h] [rbp-3D4h]
  unsigned int v53; // [rsp+174h] [rbp-3C4h]
  unsigned int v54; // [rsp+178h] [rbp-3C0h]
  int v55; // [rsp+17Ch] [rbp-3BCh]
  unsigned int v56; // [rsp+188h] [rbp-3B0h]
  int v57; // [rsp+18Ch] [rbp-3ACh]
  __int16 v58[30]; // [rsp+200h] [rbp-338h] BYREF
  unsigned int v59; // [rsp+23Ch] [rbp-2FCh]
  unsigned __int16 v60[264]; // [rsp+240h] [rbp-2F8h] BYREF
  _WORD Src[88]; // [rsp+450h] [rbp-E8h] BYREF

  v33 = a4;
  v37 = a3;
  v8 = a2;
  v32 = a2;
  v36 = a1;
  v40 = a5;
  v39 = a6;
  v38 = a7;
  v41 = a8;
  LODWORD(v31[0]) = 4456514;
  v31[1] = (__int64)L"LdrpResSearchResourceHandle Enter";
  v42 = 4325440;
  v43 = L"LdrpResSearchResourceHandle Exit";
  memset(Src, 0, 0xACuLL);
  v10 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v11 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
  else
    v11 = 2147353477LL;
  if ( (*(_BYTE *)v11 & 1) != 0 )
  {
    RtlGetCurrentServiceSessionId();
    sub_1800E0820((unsigned __int16 *)v31);
  }
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v14 = -1073741811;
    v29 = -1073741811;
    Heap = 0LL;
    goto LABEL_52;
  }
  v12 = v8 & 0x1000;
  v34 = v12;
  result = sub_1800E2500(a1, &v35);
  if ( (int)result < 0 && (v8 & 0x1000) != 0 )
    return result;
  result = sub_1800E29E8(a1, 0LL, (__int64)v58, 64);
  if ( (int)result < 0 )
    return result;
  if ( v58[0] != 23117 )
    goto LABEL_11;
  v16 = v59;
  if ( v12 )
  {
    if ( (unsigned __int64)v59 + 264 < v59 )
      goto LABEL_11;
    if ( v59 > 0x10000000 )
      goto LABEL_11;
    if ( v59 + 264 < v59 )
      goto LABEL_11;
    v17 = v35;
    if ( (unsigned __int64)v59 + 264 >= (unsigned int)v35 )
      goto LABEL_11;
  }
  else
  {
    v17 = v35;
  }
  result = sub_1800E29E8(a1, v59, (__int64)&v47, 264);
  if ( (int)result < 0 )
    return result;
  if ( v47 != 17744 )
    goto LABEL_11;
  if ( v51 == 267 )
  {
    if ( v48 != 332 )
    {
      if ( (unsigned __int16)(v48 - 448) > 4u )
        goto LABEL_11;
      v18 = 21;
      if ( !_bittest(&v18, (unsigned __int16)(v48 - 448)) )
        goto LABEL_11;
    }
    if ( v52 > 2 && v55 )
    {
      v19 = v50;
      if ( v50 >= 0x78u )
      {
        v20 = v54;
        goto LABEL_31;
      }
      goto LABEL_11;
    }
LABEL_27:
    v14 = -1073741687;
    goto LABEL_12;
  }
  if ( v51 != 523 || v48 != 512 && v48 != -31132 )
    goto LABEL_11;
  if ( v53 <= 2 || !v57 )
    goto LABEL_27;
  v19 = v50;
  if ( v50 >= 0x88u )
  {
    v20 = v56;
LABEL_31:
    if ( !v20 )
      return 3221225609LL;
    if ( !v49 )
      goto LABEL_11;
    v21 = 40 * v49;
    if ( v16 + v21 + v19 + 24 > v17 )
      goto LABEL_11;
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v21);
    v31[0] = Heap;
    if ( !Heap )
    {
      v14 = -1073741801;
      v29 = -1073741801;
      goto LABEL_52;
    }
    v14 = sub_1800E29E8(v36, v50 + v16 + 24, v31[0], v21);
    v29 = v14;
    if ( v14 >= 0 )
    {
      v22 = (_DWORD *)v31[0];
      v23 = 0;
      if ( v49 )
      {
        do
        {
          v24 = v22[3];
          if ( v20 >= v24 && v20 < v22[4] + v24 )
            break;
          v22 += 10;
          ++v23;
        }
        while ( v23 < v49 );
      }
      if ( v23 < v49 && (v25 = v20 + (unsigned int)v22[5] - (unsigned __int64)(unsigned int)v22[3]) != 0 )
      {
        v26 = v36;
        v14 = sub_1800E319C(v36, v25);
        v29 = v14;
        if ( v14 >= 0 )
        {
          if ( v33 == 3 )
          {
            v60[0] = 0;
            if ( (v32 & 0x20) != 0 )
            {
              v60[0] = 1;
              v60[2] = 0;
            }
            else
            {
              v14 = sub_180058950(0LL, 0, *((_WORD *)v37 + 8), v32, v60);
              v29 = v14;
              if ( v14 < 0 && v34 )
                goto LABEL_51;
            }
          }
          v30 = 0;
          v14 = sub_1800575E0(
                  0LL,
                  v26,
                  (unsigned int)v35,
                  v25,
                  (__int64)&v47,
                  (__int64)v22,
                  v37,
                  v33,
                  (__int64)v60,
                  v40,
                  v39,
                  v32,
                  &v30);
          v29 = v14;
          if ( v14 >= 0 )
          {
            v27 = (_DWORD *)v41;
            if ( v41 )
            {
              if ( !v30 )
              {
                Src[0] = 0;
                LODWORD(v28) = 0;
                goto LABEL_76;
              }
              v46 = Src;
              v45 = 172;
              v14 = RtlLcidToLocaleName(v30, (__int64)v44, 2, 0);
              v29 = v14;
              if ( v14 >= 0 )
              {
                v28 = -1LL;
                do
                  ++v28;
                while ( Src[v28] );
LABEL_76:
                if ( (unsigned int)v28 < *v27 && v38 )
                {
                  memmove(v38, Src, 2LL * (unsigned int)v28);
                  *v27 = v28 + 1;
                  *((_WORD *)v38 + (unsigned int)v28) = 0;
                  Heap = v31[0];
                }
                else
                {
                  *v27 = v28 + 1;
                  v14 = -1073741789;
                  v29 = -1073741789;
                  Heap = v31[0];
                }
                goto LABEL_52;
              }
            }
          }
        }
      }
      else
      {
        v14 = -1073741701;
        v29 = -1073741701;
      }
    }
LABEL_51:
    Heap = v31[0];
    goto LABEL_52;
  }
LABEL_11:
  v14 = -1073741701;
LABEL_12:
  v29 = v14;
  Heap = 0LL;
LABEL_52:
  if ( Heap )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
    v14 = v29;
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
  {
    v10 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
    v14 = v29;
  }
  if ( (*(_BYTE *)v10 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v14 = v29;
    sub_1800E0820((unsigned __int16 *)&v42);
  }
  return (unsigned int)v14;
}
