/*
 * XREFs of ?NeedsStereoChange@CDesktopRenderTarget@@UEAA_N_N@Z @ 0x18005F420
 * Callers:
 *     <none>
 * Callees:
 *     ?IsStereoSupported@CHwndRenderTarget@@IEBA_NXZ @ 0x18015AFE0 (-IsStereoSupported@CHwndRenderTarget@@IEBA_NXZ.c)
 */

char __fastcall CDesktopRenderTarget::NeedsStereoChange(CDesktopRenderTarget *this, char a2)
{
  char v2; // bl
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rbp
  char v8; // cl
  bool IsStereoSupported; // al

  v2 = 0;
  v5 = 0;
  if ( *((_DWORD *)this + 8) )
  {
    while ( 1 )
    {
      v6 = *((_QWORD *)this + 1);
      v7 = *(_QWORD *)(v6 + 8LL * v5);
      if ( !a2
        || (IsStereoSupported = CHwndRenderTarget::IsStereoSupported(*(CHwndRenderTarget **)(v6 + 8LL * v5)),
            v8 = 1,
            !IsStereoSupported) )
      {
        v8 = 0;
      }
      if ( v8 != (*(_QWORD *)(v7 + 184) != 0LL) )
        break;
      if ( ++v5 >= *((_DWORD *)this + 8) )
        return v2;
    }
    return 1;
  }
  return v2;
}
