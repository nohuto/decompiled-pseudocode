/*
 * XREFs of _anonymous_namespace_::FindObject_CWindow_HWND_______ptr64_const_&___ptr64__lambda_fc1f41b16703385be3f9cfeca28fae9f___ @ 0x1C02248F8
 * Callers:
 *     CWindowGroupManager::_ExecuteGroupAction__lambda_3212fd7ef511ca7df9e37cab43438ea4___ @ 0x1C0224B84 (CWindowGroupManager--_ExecuteGroupAction__lambda_3212fd7ef511ca7df9e37cab43438ea4___.c)
 *     CWindowGroupManager::_ExecuteGroupAction__lambda_4be443a5e2561143fd43ad1638b337da___ @ 0x1C0224C34 (CWindowGroupManager--_ExecuteGroupAction__lambda_4be443a5e2561143fd43ad1638b337da___.c)
 *     ?HandleWindowDestruction@WindowGroupingWindowManagement@@YAXPEAUtagWND@@@Z @ 0x1C02257BC (-HandleWindowDestruction@WindowGroupingWindowManagement@@YAXPEAUtagWND@@@Z.c)
 *     ?SetWindowGroup@WindowGroupingWindowManagement@@YAJAEBUWINDOW_GROUP_ID@@PEAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C0225B1C (-SetWindowGroup@WindowGroupingWindowManagement@@YAJAEBUWINDOW_GROUP_ID@@PEAUtagWND@@W4SET_WINDOW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall anonymous_namespace_::FindObject_CWindow_HWND_______ptr64_const_____ptr64__lambda_fc1f41b16703385be3f9cfeca28fae9f___(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r9
  __int64 v5; // r11
  __int64 v6; // r10
  __int64 v8; // [rsp+20h] [rbp+20h]

  v3 = *(_DWORD *)(a1 + 4);
  v4 = 0LL;
  v5 = -1LL << (v3 & 0x1F);
  v6 = a2 & v5;
  while ( 1 )
  {
    if ( v4 )
      goto LABEL_5;
    if ( v3 < 0x20 )
      return 0LL;
    v8 = a2 & v5;
    v4 = *(_QWORD *)(a1 + 8)
       + 8LL
       * ((37
         * (BYTE6(v8)
          + 37
          * (BYTE5(v8)
           + 37
           * (BYTE4(v8) + 37 * (BYTE3(v8) + 37 * (BYTE2(v8) + 37 * (BYTE1(v8) + 37 * ((unsigned __int8)v6 + 11623883)))))))
         + HIBYTE(v8)) & ((v3 >> 5) - 1));
LABEL_5:
    while ( 1 )
    {
      v4 = *(_QWORD *)v4;
      if ( (v4 & 1) != 0 )
        break;
      if ( v6 == (v5 & *(_QWORD *)(v4 + 8)) )
        goto LABEL_9;
    }
    v4 = 0LL;
LABEL_9:
    if ( !v4 || *a3 == *(_QWORD *)(v4 + 16) )
      return v4;
  }
}
