/*
 * XREFs of ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x18001725C
 * Callers:
 *     ?IsPlaying@CApplication@@QEAAHH@Z @ 0x180011570 (-IsPlaying@CApplication@@QEAAHH@Z.c)
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x180011F40 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x180015FFC (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18002B680 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x18002BBD0 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x18001AC68 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int64 __fastcall CProcess::GetActiveRenderStreamCount(CProcess *this, unsigned int a2)
{
  __int64 v2; // r11
  unsigned int v3; // r9d
  int v4; // r10d
  CProcess *v5; // rbx
  __int64 i; // r8
  __int64 v7; // rax

  v2 = *((int *)this + 76);
  v3 = 0;
  v4 = 0;
  v5 = this;
  if ( (int)v2 > 0 )
  {
    for ( i = 0LL; i < v2; ++i )
    {
      if ( i < 0 || v4 >= (int)v2 )
      {
        ATL::_AtlRaiseException((unsigned int)this, a2);
        JUMPOUT(0x1800172B7LL);
      }
      ++v4;
      LODWORD(this) = a2;
      v7 = *(_QWORD *)(*((_QWORD *)v5 + 37) + 8 * i);
      v3 += *(_DWORD *)(v7 + 4LL * a2);
    }
  }
  return v3;
}
