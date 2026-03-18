/*
 * XREFs of DestroyWindowSmIcon @ 0x1C00972D0
 * Callers:
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C023AD50 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C02403E0 (xxxRecreateSmallIcons.c)
 * Callees:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C002EA8C (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     HMValidateHandleNoRip @ 0x1C00B4C50 (HMValidateHandleNoRip.c)
 */

__int64 __fastcall DestroyWindowSmIcon(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v6; // rax
  struct tagCURSOR *v7; // rbx

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 264LL);
  if ( !v4 )
    return 0LL;
  LOBYTE(a2) = 3;
  v6 = HMValidateHandleNoRip(v4, a2, a3);
  v7 = (struct tagCURSOR *)v6;
  if ( !v6 || (*(_DWORD *)(v6 + 80) & 0x80u) == 0 )
    return 0LL;
  SetOrClrWF(0, a1, 0x720u, 1);
  *(_QWORD *)(*(_QWORD *)(a1 + 40) + 264LL) = 0LL;
  _DestroyCursor(v7, 0);
  return 1LL;
}
