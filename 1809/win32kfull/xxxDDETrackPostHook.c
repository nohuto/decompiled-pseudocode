/*
 * XREFs of xxxDDETrackPostHook @ 0x1C01F4DF4
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0029C40 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C01F35B0 (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01F4358 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F4924 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F49EC (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxClientFreeDDEHandle @ 0x1C0207600 (xxxClientFreeDDEHandle.c)
 *     xxxClientGetDDEHookData @ 0x1C0207848 (xxxClientGetDDEHookData.c)
 *     xxxMessageEvent @ 0x1C022CA28 (xxxMessageEvent.c)
 */

__int64 __fastcall xxxDDETrackPostHook(unsigned int *a1, struct tagWND *a2, __int64 a3, void **a4, int a5)
{
  __int64 v5; // rsi
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // ebx
  struct tagWND *v14; // rax
  struct tagWND *v15; // rbx
  struct tagDDECONV *DdeConv; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 ThreadWin32Thread; // rax
  struct tagFREELIST *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // eax
  __int64 v26; // rdx
  _QWORD v28[3]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v29[7]; // [rsp+48h] [rbp-38h] BYREF
  struct tagDDECONV *v30; // [rsp+B8h] [rbp+38h]

  v5 = 0LL;
  v10 = a5 != 0 ? 0x2000000 : 0x4000000;
  if ( (v10 & MonitorFlags) != 0 )
  {
    memset(v29, 0, sizeof(v29));
    v11 = *a1;
    if ( (_DWORD)v11 == 994
      || (unsigned int)v11 > 0x3E3
      && ((unsigned int)v11 <= 0x3E5 || (unsigned int)v11 > 0x3E6 && (unsigned int)v11 <= 0x3E8) )
    {
      xxxClientGetDDEHookData(v11, *a4, v29);
      LODWORD(v11) = *a1;
    }
    else
    {
      v12 = *(unsigned __int16 *)a4;
      LODWORD(v29[2]) = 0;
      v29[0] = v12;
      v29[1] = *((unsigned __int16 *)a4 + 1);
    }
    xxxMessageEvent((_DWORD)a2, v11, a3, (unsigned int)*a4, v10, (__int64)v29);
  }
  if ( *(_QWORD *)(gptiCurrent + 424LL) == *(_QWORD *)(*((_QWORD *)a2 + 2) + 424LL) )
    return 2;
  if ( *a1 == 992 )
    return 0;
  v14 = (struct tagWND *)ValidateHwnd(a3);
  v15 = v14;
  if ( v14 )
  {
    DdeConv = FindDdeConv(v14, a2);
    v30 = DdeConv;
    v5 = (__int64)DdeConv;
    if ( DdeConv )
    {
      if ( a5
        && *(_QWORD *)(*((_QWORD *)DdeConv + 4) + 56LL)
        && (*(_DWORD *)(*((_QWORD *)v15 + 2) + 648LL) & 0x40000) == 0 )
      {
        return 0;
      }
      if ( gptiCurrent != *((_QWORD *)DdeConv + 2) && *(_WORD *)(gptiCurrent + 632LL) != 1024 )
      {
        UserSetLastError(1408LL, v17, v18, v19);
        return 0;
      }
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17);
      v28[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v28;
      v28[1] = v30;
      _InterlockedAdd((volatile signed __int32 *)v30 + 2, 1u);
      v21 = (struct tagFREELIST *)*((_QWORD *)v30 + 9);
      *((_QWORD *)v30 + 9) = 0LL;
      xxxFreeListFree(v21);
      v23 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v30;
      LOBYTE(v23) = *(_BYTE *)(v23 + gSharedInfo[1] + 25);
      if ( (v23 & 1) != 0 || *a1 != 993 && (*((_DWORD *)v30 + 20) & 6) != 0 )
      {
        v13 = 1;
      }
      else
      {
        v24 = *((_QWORD *)v30 + 7);
        if ( v24 )
        {
          v25 = (*(__int64 (__fastcall **)(unsigned int *, void **, struct tagDDECONV *))(v24 + 32))(a1, a4, v30);
        }
        else if ( (*((_DWORD *)v30 + 20) & 1) != 0 )
        {
          v25 = xxxUnexpectedServerPost(a1, a4, v30);
        }
        else
        {
          v25 = xxxUnexpectedClientPost(a1, a4, v30);
        }
        v13 = v25;
      }
      v5 = ThreadUnlock1(v23, v22);
    }
    else
    {
      v13 = *a1 == 993;
    }
  }
  else
  {
    v13 = (*a1 == 993) + 1;
  }
  if ( v13 == 1 && (*(_DWORD *)(gptiCurrent + 488LL) & 1) == 0 )
  {
    v26 = 0x8000LL;
    switch ( (unsigned __int16)*a1 )
    {
      case 0x3E2u:
        v26 = 33025LL;
        break;
      case 0x3E3u:
        break;
      case 0x3E4u:
        v26 = 32769LL;
        break;
      default:
        if ( (unsigned __int16)*a1 != 997 )
        {
          if ( (unsigned __int16)*a1 == 998 )
            break;
          if ( (unsigned __int16)*a1 != 999 )
          {
            if ( (unsigned __int16)*a1 != 1000 )
              return v13;
            v26 = 34816LL;
            break;
          }
        }
        v26 = 32899LL;
        break;
    }
    if ( v5 )
    {
      xxxClientFreeDDEHandle(*a4, v26);
      return 3;
    }
  }
  return v13;
}
