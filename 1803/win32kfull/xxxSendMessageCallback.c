/*
 * XREFs of xxxSendMessageCallback @ 0x1C0060F68
 * Callers:
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C00602A4 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     xxxCapture @ 0x1C00605D8 (xxxCapture.c)
 *     xxxBroadcastMessageEx @ 0x1C0060914 (xxxBroadcastMessageEx.c)
 *     xxxSendNotifyMessage @ 0x1C0060D20 (xxxSendNotifyMessage.c)
 *     ?xxxWrapSendMessageCallback@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0060E20 (-xxxWrapSendMessageCallback@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00634B4 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01BBAF4 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C00431F0 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     SfnDWORD @ 0x1C0043660 (SfnDWORD.c)
 *     xxxInterSendMsgEx @ 0x1C0044BF0 (xxxInterSendMsgEx.c)
 *     xxxBroadcastMessage @ 0x1C01115F4 (xxxBroadcastMessage.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C013B040 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxSendMessageCallback(
        struct tagWND *a1,
        __int64 a2,
        HWND a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        int a7,
        int a8,
        int a9)
{
  __int64 v9; // r11
  __int64 v11; // rdi
  __int64 v13; // r14
  __int64 v14; // r12
  int v15; // eax
  ULONG_PTR v16; // r9
  __int64 v17; // rax
  __int64 *v18; // rcx
  __int64 v20; // rcx
  BOOL v21; // ecx
  _DWORD *v22; // rcx
  unsigned int *v23; // rcx
  unsigned int v24; // eax
  unsigned int v25; // eax
  BOOL v26; // ecx
  __int64 v27; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v28; // [rsp+68h] [rbp-50h]
  unsigned __int64 v29; // [rsp+70h] [rbp-48h]
  __int64 v30; // [rsp+78h] [rbp-40h]
  __int64 v31; // [rsp+80h] [rbp-38h]
  __int64 v32; // [rsp+88h] [rbp-30h]
  int v33; // [rsp+C8h] [rbp+10h]

  v9 = a4;
  v11 = (unsigned int)a2;
  v13 = a5;
  v14 = a6;
  if ( (unsigned int)a2 < 0x400 )
  {
    if ( (MessageTable[(unsigned int)a2] & 0x200) == 0 && ((_DWORD)a2 != 537 || ((unsigned __int16)a3 & 0x8000) == 0) )
      goto LABEL_4;
    v15 = 1;
  }
  else
  {
    v15 = 0;
  }
  if ( v15 )
  {
    UserSetLastError(1159LL, a2);
    return 0LL;
  }
LABEL_4:
  if ( a1 != (struct tagWND *)-1LL )
  {
    v16 = 0LL;
    if ( a1 )
      v17 = *(_QWORD *)a1;
    else
      LOWORD(v17) = 0;
    if ( (unsigned __int64)(unsigned __int16)v17 >= *(_QWORD *)(gpsi + 8LL)
      || (v16 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v17 * LODWORD(gSharedInfo[2]),
          *(struct tagWND **)(gpKernelHandleTable + 24LL * (unsigned __int16)v17) != a1)
      || *(_BYTE *)(v16 + 24) != 1 )
    {
      KeBugCheckEx(0x197u, 1uLL, (ULONG_PTR)a1, v16, 1uLL);
    }
    if ( __PAIR128__(a6, a5) == __PAIR128__(1LL, 0LL) || gptiCurrent != *((_QWORD *)a1 + 2) )
    {
      v18 = 0LL;
      if ( a5 )
      {
        LODWORD(v27) = a7 != 0 ? 257 : 1;
        v28 = a5;
        v29 = a6;
        v18 = &v27;
      }
      return xxxInterSendMsgEx(a1, a2, a3, v9, 0, *((_QWORD *)a1 + 2), v18, a8, a9);
    }
    if ( ((*(_BYTE *)(gptiCurrent + 672LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x20) != 0 )
    {
      v21 = (unsigned int)a2 < 0x400 && ((unsigned __int16)MessageTable[(unsigned int)a2] >> 14) & 1;
      if ( !v21 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 4) == 0 )
      {
        v30 = *(_QWORD *)a1;
        LODWORD(v29) = a2;
        v28 = (unsigned __int64)a3;
        v27 = v9;
        v31 = 0LL;
        xxxCallHook(0, 0LL, (__int64)&v27, 4);
        v9 = a4;
      }
    }
    v20 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v20 + 18) & 4) == 0 )
    {
      xxxSendMessageToClient(a1, v11, a3, v9, 0LL, 0, &a5);
LABEL_22:
      if ( v13 )
      {
        if ( a7 )
        {
          v22 = *(_DWORD **)(gptiCurrent + 440LL);
          v33 = *v22 & 8;
          *v22 |= 4u;
          **(_DWORD **)(gptiCurrent + 440LL) |= 8u;
          if ( (_DWORD)v11 == 576 || (_DWORD)v11 == 281 )
            _guard_dispatch_icall_fptr();
          else
            SfnDWORD((volatile signed __int32 *)a1, (unsigned int)v11, v14, a5, v13, *(_QWORD *)(gpsi + 752LL));
          **(_DWORD **)(gptiCurrent + 440LL) &= ~4u;
          v23 = *(unsigned int **)(gptiCurrent + 440LL);
          v24 = *v23;
          if ( v33 )
            v25 = v24 | 8;
          else
            v25 = v24 & 0xFFFFFFF7;
          *v23 = v25;
        }
        else
        {
          _guard_dispatch_icall_fptr();
        }
      }
      if ( ((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x2000) != 0 )
      {
        v26 = (unsigned int)v11 < 0x400 && ((unsigned __int16)MessageTable[v11] >> 14) & 1;
        if ( !v26 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 4) == 0 )
        {
          v31 = *(_QWORD *)a1;
          LODWORD(v30) = v11;
          v29 = (unsigned __int64)a3;
          v28 = a4;
          v27 = a5;
          v32 = 0LL;
          xxxCallHook(0, 0LL, (__int64)&v27, 12);
        }
      }
      return 1LL;
    }
    if ( *(_QWORD *)(v20 + 120) < 7uLL )
    {
      a5 = _guard_dispatch_icall_fptr();
      goto LABEL_22;
    }
    return 0LL;
  }
  if ( a5 )
  {
    v27 = a5;
    v28 = a6;
    LODWORD(v29) = a7;
  }
  return xxxBroadcastMessage(
           0,
           a2,
           (_DWORD)a3,
           a4,
           a5 != 0 ? 3 : 1,
           (unsigned __int64)&v27 & ((unsigned __int128)-(__int128)(unsigned __int64)a5 >> 64),
           a8);
}
