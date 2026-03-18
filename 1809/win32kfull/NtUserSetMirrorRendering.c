/*
 * XREFs of NtUserSetMirrorRendering @ 0x1C021CEA0
 * Callers:
 *     <none>
 * Callees:
 *     GreDisableMirrorRendering @ 0x1C02692C8 (GreDisableMirrorRendering.c)
 *     GreEnableMirrorRendering @ 0x1C02693D8 (GreEnableMirrorRendering.c)
 */

__int64 __fastcall NtUserSetMirrorRendering(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // ebx
  __int64 v9; // r9
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v8 = 0;
  v9 = v4;
  if ( v4 )
  {
    v7 = *(_QWORD *)(v4 + 40);
    v5 = (*(_WORD *)(v7 + 42) & 0x2FFFu) - 669;
    if ( (v5 & 0xFFFFFFFD) != 0 )
    {
      v15[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v15;
      v15[1] = v4;
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      v10 = *(_QWORD *)(gpDispInfo + 40LL);
      if ( a2 )
        v11 = GreEnableMirrorRendering(v10, a1, v7, v4);
      else
        v11 = GreDisableMirrorRendering(v10, a1, v7, v4);
      v8 = v11;
      ThreadUnlock1(v13, v12);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v9);
  return v8;
}
