/*
 * XREFs of ?GetSecondaryCloneDisplaysNoRef@CDisplaySet@@QEBAJPEAVCDisplay@@PEAV?$DynArray@PEAVCDisplay@@$0A@@@@Z @ 0x18015A8D0
 * Callers:
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1801A7D78 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDisplaySet::GetSecondaryCloneDisplaysNoRef(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rdx
  unsigned int v9; // eax
  unsigned int v10; // edx
  signed int v11; // eax
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  v6 = a1;
  if ( *(_BYTE *)(a2 + 314) )
  {
    LODWORD(v7) = *(_DWORD *)(a1 + 72);
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          if ( !(_DWORD)v7 )
            return v3;
          v7 = (unsigned int)(v7 - 1);
          v8 = *(_QWORD *)(*(_QWORD *)(v6 + 48) + 8 * v7);
          v13 = v8;
        }
        while ( *(_QWORD *)(v8 + 152) != a2 || v8 == a2 );
        v9 = *(_DWORD *)(a3 + 24);
        v10 = v9 + 1;
        if ( v9 + 1 >= v9 )
          break;
        v3 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, 0x80070216, 0xB8u, 0LL);
LABEL_11:
        if ( (v3 & 0x80000000) != 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v3, 0x3D7u, 0LL);
          return v3;
        }
      }
      if ( v10 > *(_DWORD *)(a3 + 20) )
      {
        v11 = DynArrayImpl<0>::AddMultipleAndSet(a3, 8, 1, &v13);
        v3 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v11, 0xC3u, 0LL);
        goto LABEL_11;
      }
      a1 = *(unsigned int *)(a3 + 24);
      v3 = 0;
      *(_QWORD *)(*(_QWORD *)a3 + 8 * a1) = v13;
      *(_DWORD *)(a3 + 24) = v10;
    }
  }
  return v3;
}
