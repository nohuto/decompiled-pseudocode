/*
 * XREFs of ?_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z @ 0x180006714
 * Callers:
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x18000642C (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?OnAnimationComplete@CStoryboard@@UEAAJI@Z @ 0x1800066E0 (-OnAnimationComplete@CStoryboard@@UEAAJI@Z.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x1800A733C (-Abandon@CStoryboard@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CStoryboard::_NotifyStoryboardState(__int64 a1, int a2)
{
  __int64 v2; // rbx
  LPARAM i; // rbp
  __int64 v5; // rsi
  _DWORD *v6; // rax
  unsigned int v7; // ecx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  for ( i = a2; (unsigned int)v2 < *(_DWORD *)(a1 + 112); v2 = (unsigned int)(v2 + 1) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v2);
    if ( (unsigned int)GetWindowBand(*(_QWORD *)(v5 + 16), &v8) )
    {
      if ( (*(_DWORD *)(v5 + 24) & 0x400000) != 0 )
      {
LABEL_7:
        PostMessageW(*(HWND *)(v5 + 16), 0x32Au, *(int *)(a1 + 72), i);
      }
      else
      {
        v6 = &unk_1800C4540;
        v7 = 0;
        while ( v8 != *v6 )
        {
          ++v7;
          ++v6;
          if ( v7 >= 5 )
            goto LABEL_7;
        }
      }
    }
  }
}
