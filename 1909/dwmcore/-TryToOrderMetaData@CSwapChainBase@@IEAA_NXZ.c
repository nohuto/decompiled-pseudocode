/*
 * XREFs of ?TryToOrderMetaData@CSwapChainBase@@IEAA_NXZ @ 0x1800DDD58
 * Callers:
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x180062740 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BB688 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?RemoveAt@?$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJI@Z @ 0x180163478 (-RemoveAt@-$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJI@Z.c)
 */

char __fastcall CSwapChainBase::TryToOrderMetaData(CSwapChainBase *this)
{
  unsigned int v1; // ebx
  char v2; // r12
  __int64 v3; // r15
  char v5; // r13
  __int64 v7; // rsi
  __int64 *v8; // rdi
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int64 v11; // rcx
  __int64 v12; // rax
  signed int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // edx
  int v16; // r10d
  bool v17; // zf
  __int64 v18; // r9
  char v19; // r11
  __int64 v20; // r8
  __int64 v21; // rbx
  __int64 v22; // rbx
  int v23; // edx
  unsigned int v24; // ecx
  __int64 v25; // rbx
  unsigned int v26; // r8d
  __int64 v27; // r11
  __int64 v28; // r8
  bool v29; // al
  __int128 v30; // xmm2
  __int128 v31; // xmm3
  __int128 v32; // xmm4
  __int64 v33; // rax
  __int64 v34; // rbx
  __int128 v35; // [rsp+40h] [rbp-21h] BYREF
  int v36; // [rsp+50h] [rbp-11h]
  unsigned int v37; // [rsp+54h] [rbp-Dh]
  unsigned int v38; // [rsp+58h] [rbp-9h]
  __int128 v39; // [rsp+60h] [rbp-1h] BYREF
  __int128 v40; // [rsp+70h] [rbp+Fh]

  v36 = 0;
  v1 = 0;
  v37 = 0;
  v2 = 0;
  v3 = 0LL;
  v38 = 0;
  v5 = 1;
  v35 = 0LL;
  if ( *((_DWORD *)this + 92) )
  {
    v7 = v35;
    v8 = (__int64 *)((char *)this + 344);
    v5 = 1;
    do
    {
      v9 = *(_OWORD *)(*v8 + 48 * v3 + 16);
      v10 = *(_OWORD *)(*v8 + 48 * v3 + 32);
      if ( *(_DWORD *)(*v8 + 48 * v3) == 1 )
      {
        v11 = v1 + 1;
        v39 = *(_OWORD *)(*v8 + 48 * v3 + 16);
        v40 = v10;
        if ( (unsigned int)v11 < v1 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, 0x80070216, 0xB8u, 0LL);
        }
        else if ( (unsigned int)v11 > v37 )
        {
          v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v35, 32, 1, &v39);
          if ( v13 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xC3u, 0LL);
          v1 = v38;
          v7 = v35;
        }
        else
        {
          v12 = v1++;
          v12 *= 32LL;
          v38 = v11;
          *(_OWORD *)(v12 + v7) = v9;
          *(_OWORD *)(v12 + v7 + 16) = v40;
        }
      }
      v15 = *((_DWORD *)this + 92);
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < v15 );
    if ( v1 )
    {
      v16 = *(_DWORD *)(v7 + 16);
      v17 = (double)v16 == 0.0;
      if ( (double)v16 != 0.0 )
      {
        if ( (double)*(int *)(v7 + 20) != 0.0 )
        {
          if ( v1 > 1 )
          {
            v5 = 0;
            v34 = 0LL;
            if ( v15 )
            {
              do
              {
                if ( *(_DWORD *)(*v8 + 48 * v34) == 1 )
                {
                  DynArray<_DWMIndirectMetaData,0>::RemoveAt(v8, (unsigned int)v34);
                  LODWORD(v34) = v34 - 1;
                }
                v34 = (unsigned int)(v34 + 1);
              }
              while ( (unsigned int)v34 < *((_DWORD *)this + 92) );
            }
          }
LABEL_65:
          v38 = 0;
          DynArrayImpl<0>::ShrinkToSize((__int64)&v35, 0x20u);
          goto LABEL_2;
        }
        v17 = (double)v16 == 0.0;
      }
      if ( !v17 )
        v2 = 1;
      if ( v1 != 1 )
      {
        v18 = 0LL;
        v19 = 1;
        if ( v15 )
        {
          v20 = *v8;
          do
          {
            if ( *(_DWORD *)(v20 + 48 * v18) == 1 )
            {
              if ( v19 )
              {
                v19 = 0;
              }
              else if ( v2 )
              {
                if ( *(_DWORD *)(v20 + 48 * v18 + 32) != v16 || (double)*(int *)(v20 + 48 * v18 + 36) != 0.0 )
                {
                  v5 = 0;
                  v21 = 0LL;
                  do
                  {
                    if ( *(_DWORD *)(*v8 + 48 * v21) == 1 )
                    {
                      DynArray<_DWMIndirectMetaData,0>::RemoveAt(v8, (unsigned int)v21);
                      LODWORD(v21) = v21 - 1;
                    }
                    v21 = (unsigned int)(v21 + 1);
                  }
                  while ( (unsigned int)v21 < *((_DWORD *)this + 92) );
                  goto LABEL_65;
                }
              }
              else if ( *(_DWORD *)(v20 + 48 * v18 + 36) != *(_DWORD *)(v7 + 20)
                     || (double)*(int *)(v20 + 48 * v18 + 32) != 0.0 )
              {
                v5 = 0;
                v22 = 0LL;
                do
                {
                  if ( *(_DWORD *)(*v8 + 48 * v22) == 1 )
                  {
                    DynArray<_DWMIndirectMetaData,0>::RemoveAt(v8, (unsigned int)v22);
                    LODWORD(v22) = v22 - 1;
                  }
                  v22 = (unsigned int)(v22 + 1);
                }
                while ( (unsigned int)v22 < *((_DWORD *)this + 92) );
                goto LABEL_65;
              }
            }
            v18 = (unsigned int)(v18 + 1);
          }
          while ( (unsigned int)v18 < v15 );
        }
        if ( v2 )
        {
          v23 = 1;
          if ( v16 <= 0 )
            v23 = -1;
        }
        else
        {
          v23 = -1;
          if ( *(int *)(v7 + 20) > 0 )
            v23 = 1;
        }
        v24 = *((_DWORD *)this + 92);
        v25 = 0LL;
        if ( v24 == 1 )
          goto LABEL_65;
        while ( 1 )
        {
          v26 = v24;
          if ( *(_DWORD *)(*v8 + 48 * v25) == 1 )
          {
            v27 = (unsigned int)(v25 + 1);
            if ( (unsigned int)v27 < v24 )
              break;
          }
LABEL_58:
          v25 = (unsigned int)(v25 + 1);
          v24 = v26;
          if ( (unsigned int)v25 >= v26 - 1 )
            goto LABEL_65;
        }
        while ( 1 )
        {
          v28 = *v8;
          if ( *(_DWORD *)(*v8 + 48 * v27) == 1 )
          {
            if ( v2 )
            {
              v29 = v23 * *(_DWORD *)(v28 + 48 * v25 + 16) < v23 * *(_DWORD *)(v28 + 48 * v27 + 16);
              goto LABEL_55;
            }
            if ( v23 * *(_DWORD *)(v28 + 48 * v25 + 20) < v23 * *(_DWORD *)(v28 + 48 * v27 + 20) )
            {
              v29 = 1;
LABEL_55:
              if ( v29 )
              {
                v30 = *(_OWORD *)(v28 + 48 * v25);
                v31 = *(_OWORD *)(v28 + 48 * v25 + 16);
                v32 = *(_OWORD *)(v28 + 48 * v25 + 32);
                *(_OWORD *)(v28 + 48 * v25) = *(_OWORD *)(v28 + 48 * v27);
                *(_OWORD *)(v28 + 48 * v25 + 16) = *(_OWORD *)(v28 + 48 * v27 + 16);
                *(_OWORD *)(v28 + 48 * v25 + 32) = *(_OWORD *)(v28 + 48 * v27 + 32);
                v33 = *v8;
                *(_OWORD *)(v33 + 48 * v27) = v30;
                *(_OWORD *)(v33 + 48 * v27 + 16) = v31;
                *(_OWORD *)(v33 + 48 * v27 + 32) = v32;
              }
            }
          }
          v26 = *((_DWORD *)this + 92);
          v27 = (unsigned int)(v27 + 1);
          if ( (unsigned int)v27 >= v26 )
            goto LABEL_58;
        }
      }
      goto LABEL_65;
    }
  }
LABEL_2:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v35);
  return v5;
}
