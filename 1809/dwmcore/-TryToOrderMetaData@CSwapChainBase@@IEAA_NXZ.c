/*
 * XREFs of ?TryToOrderMetaData@CSwapChainBase@@IEAA_NXZ @ 0x1800EAB84
 * Callers:
 *     ?Present@CSwapChainBase@@QEAAJAEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x18007D0B0 (-Present@CSwapChainBase@@QEAAJAEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?RemoveAt@?$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJI@Z @ 0x1802048F8 (-RemoveAt@-$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJI@Z.c)
 */

char __fastcall CSwapChainBase::TryToOrderMetaData(CSwapChainBase *this, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // si
  unsigned int v6; // ebx
  unsigned int v7; // r12d
  __int64 v9; // rsi
  __int64 *v10; // rdi
  unsigned int v11; // r15d
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  unsigned int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // edx
  char v19; // r13
  int v20; // r10d
  bool v21; // zf
  __int64 v22; // r9
  char v23; // r11
  __int64 v24; // r8
  __int64 v25; // rbx
  __int64 v26; // rbx
  int v27; // edx
  unsigned int v28; // ecx
  __int64 v29; // rbx
  unsigned int v30; // r8d
  __int64 v31; // r11
  __int64 v32; // r8
  bool v33; // al
  __int128 v34; // xmm2
  __int128 v35; // xmm3
  __int128 v36; // xmm4
  __int64 v37; // rax
  __int64 v38; // rbx
  __int128 v39; // [rsp+40h] [rbp-31h] BYREF
  __int64 v40; // [rsp+50h] [rbp-21h]
  unsigned int v41; // [rsp+58h] [rbp-19h]
  unsigned int v42; // [rsp+60h] [rbp-11h]
  __int128 v43; // [rsp+68h] [rbp-9h] BYREF
  __int128 v44; // [rsp+78h] [rbp+7h]

  v5 = 1;
  v6 = 0;
  v7 = 0;
  v40 = 0LL;
  v39 = 0LL;
  v41 = 0;
  if ( !*((_DWORD *)this + 92) )
    goto LABEL_2;
  v9 = v39;
  v10 = (__int64 *)((char *)this + 344);
  v11 = v42;
  do
  {
    v12 = *(_OWORD *)(*v10 + 48LL * v7 + 16);
    v13 = *(_OWORD *)(*v10 + 48LL * v7 + 32);
    if ( *(_DWORD *)(*v10 + 48LL * v7) == 1 )
    {
      v14 = v6 + 1;
      v43 = *(_OWORD *)(*v10 + 48LL * v7 + 16);
      if ( v6 + 1 >= v6 )
        v11 = v6 + 1;
      a4 = v14 < v6 ? 0x80070216 : 0;
      v44 = v13;
      if ( v14 < v6 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(6LL * v7, 0LL, 0, a4, 0xB5u);
      }
      else if ( v11 > HIDWORD(v40) )
      {
        v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v39, 32, 1, &v43);
        if ( v16 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0xC0u);
        v6 = v41;
        v9 = v39;
      }
      else
      {
        v15 = v6;
        v6 = v11;
        v15 *= 32LL;
        v41 = v11;
        *(_OWORD *)(v15 + v9) = v12;
        *(_OWORD *)(v15 + v9 + 16) = v44;
      }
    }
    v18 = *((_DWORD *)this + 92);
    ++v7;
  }
  while ( v7 < v18 );
  v19 = 0;
  if ( !v6 )
  {
    v5 = 1;
    goto LABEL_2;
  }
  v20 = *(_DWORD *)(v9 + 16);
  v21 = (double)v20 == 0.0;
  if ( (double)v20 == 0.0 )
    goto LABEL_19;
  if ( (double)*(int *)(v9 + 20) == 0.0 )
  {
    v21 = (double)v20 == 0.0;
LABEL_19:
    if ( !v21 )
      v19 = 1;
    if ( v6 == 1 )
      goto LABEL_61;
    v22 = 0LL;
    v23 = 1;
    if ( v18 )
    {
      v24 = *v10;
      do
      {
        if ( *(_DWORD *)(v24 + 48 * v22) == 1 )
        {
          if ( v23 )
          {
            v23 = 0;
          }
          else if ( v19 )
          {
            if ( *(_DWORD *)(v24 + 48 * v22 + 32) != v20 || (double)*(int *)(v24 + 48 * v22 + 36) != 0.0 )
            {
              v5 = 0;
              v25 = 0LL;
              do
              {
                if ( *(_DWORD *)(*v10 + 48 * v25) == 1 )
                {
                  DynArray<_DWMIndirectMetaData,0>::RemoveAt(v10, (unsigned int)v25, v24, v22);
                  LODWORD(v25) = v25 - 1;
                }
                v25 = (unsigned int)(v25 + 1);
              }
              while ( (unsigned int)v25 < *((_DWORD *)this + 92) );
              goto LABEL_62;
            }
          }
          else if ( *(_DWORD *)(v24 + 48 * v22 + 36) != *(_DWORD *)(v9 + 20)
                 || (double)*(int *)(v24 + 48 * v22 + 32) != 0.0 )
          {
            v5 = 0;
            v26 = 0LL;
            do
            {
              if ( *(_DWORD *)(*v10 + 48 * v26) == 1 )
              {
                DynArray<_DWMIndirectMetaData,0>::RemoveAt(v10, (unsigned int)v26, v24, v22);
                LODWORD(v26) = v26 - 1;
              }
              v26 = (unsigned int)(v26 + 1);
            }
            while ( (unsigned int)v26 < *((_DWORD *)this + 92) );
            goto LABEL_62;
          }
        }
        v22 = (unsigned int)(v22 + 1);
      }
      while ( (unsigned int)v22 < v18 );
    }
    if ( v19 )
    {
      v27 = 1;
      if ( v20 <= 0 )
        v27 = -1;
    }
    else
    {
      v27 = -1;
      if ( *(int *)(v9 + 20) > 0 )
        v27 = 1;
    }
    v28 = *((_DWORD *)this + 92);
    v29 = 0LL;
    if ( v28 == 1 )
    {
LABEL_61:
      v5 = 1;
      goto LABEL_62;
    }
    while ( 1 )
    {
      v30 = v28;
      if ( *(_DWORD *)(*v10 + 48 * v29) == 1 )
      {
        v31 = (unsigned int)(v29 + 1);
        if ( (unsigned int)v31 < v28 )
          break;
      }
LABEL_60:
      v29 = (unsigned int)(v29 + 1);
      v28 = v30;
      if ( (unsigned int)v29 >= v30 - 1 )
        goto LABEL_61;
    }
    while ( 1 )
    {
      v32 = *v10;
      if ( *(_DWORD *)(*v10 + 48 * v31) == 1 )
      {
        if ( v19 )
        {
          v33 = v27 * *(_DWORD *)(v32 + 48 * v29 + 16) < v27 * *(_DWORD *)(v32 + 48 * v31 + 16);
          goto LABEL_57;
        }
        if ( v27 * *(_DWORD *)(v32 + 48 * v29 + 20) < v27 * *(_DWORD *)(v32 + 48 * v31 + 20) )
        {
          v33 = 1;
LABEL_57:
          if ( v33 )
          {
            v34 = *(_OWORD *)(v32 + 48 * v29);
            v35 = *(_OWORD *)(v32 + 48 * v29 + 16);
            v36 = *(_OWORD *)(v32 + 48 * v29 + 32);
            *(_OWORD *)(v32 + 48 * v29) = *(_OWORD *)(v32 + 48 * v31);
            *(_OWORD *)(v32 + 48 * v29 + 16) = *(_OWORD *)(v32 + 48 * v31 + 16);
            *(_OWORD *)(v32 + 48 * v29 + 32) = *(_OWORD *)(v32 + 48 * v31 + 32);
            v37 = *v10;
            *(_OWORD *)(v37 + 48 * v31) = v34;
            *(_OWORD *)(v37 + 48 * v31 + 16) = v35;
            *(_OWORD *)(v37 + 48 * v31 + 32) = v36;
          }
        }
      }
      v30 = *((_DWORD *)this + 92);
      v31 = (unsigned int)(v31 + 1);
      if ( (unsigned int)v31 >= v30 )
        goto LABEL_60;
    }
  }
  if ( v6 <= 1 )
  {
    v5 = 1;
  }
  else
  {
    v5 = 0;
    v38 = 0LL;
    if ( v18 )
    {
      do
      {
        if ( *(_DWORD *)(*v10 + 48 * v38) == 1 )
        {
          DynArray<_DWMIndirectMetaData,0>::RemoveAt(v10, (unsigned int)v38, a3, a4);
          LODWORD(v38) = v38 - 1;
        }
        v38 = (unsigned int)(v38 + 1);
      }
      while ( (unsigned int)v38 < *((_DWORD *)this + 92) );
    }
  }
LABEL_62:
  v41 = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)&v39, 0x20u);
LABEL_2:
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v39);
  return v5;
}
