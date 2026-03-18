/*
 * XREFs of xxxDDETrackPostHook @ 0x1C01D06BC
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0041530 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C01CEF2C (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01CFC84 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01D0234 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01D02FC (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxClientFreeDDEHandle @ 0x1C01E1A5C (xxxClientFreeDDEHandle.c)
 *     xxxClientGetDDEHookData @ 0x1C01E1C74 (xxxClientGetDDEHookData.c)
 *     xxxMessageEvent @ 0x1C0203AA8 (xxxMessageEvent.c)
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
  __int64 ThreadWin32Thread; // rax
  struct tagFREELIST *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned int v24; // eax
  __int64 v25; // rdx
  _QWORD v27[3]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v28[7]; // [rsp+48h] [rbp-38h] BYREF
  struct tagDDECONV *v29; // [rsp+B8h] [rbp+38h]

  v5 = 0LL;
  v10 = a5 != 0 ? 0x2000000 : 0x4000000;
  if ( (v10 & MonitorFlags) != 0 )
  {
    memset(v28, 0, sizeof(v28));
    v11 = *a1;
    if ( (_DWORD)v11 == 994
      || (unsigned int)v11 > 0x3E3
      && ((unsigned int)v11 <= 0x3E5 || (unsigned int)v11 > 0x3E6 && (unsigned int)v11 <= 0x3E8) )
    {
      xxxClientGetDDEHookData(v11, *a4, v28);
      LODWORD(v11) = *a1;
    }
    else
    {
      v12 = *(unsigned __int16 *)a4;
      LODWORD(v28[2]) = 0;
      v28[0] = v12;
      v28[1] = *((unsigned __int16 *)a4 + 1);
    }
    xxxMessageEvent((_DWORD)a2, v11, a3, (unsigned int)*a4, v10, (__int64)v28);
  }
  if ( *(_QWORD *)(gptiCurrent + 416LL) == *(_QWORD *)(*((_QWORD *)a2 + 2) + 416LL) )
    return 2;
  if ( *a1 == 992 )
    return 0;
  v14 = (struct tagWND *)ValidateHwnd(a3);
  v15 = v14;
  if ( v14 )
  {
    DdeConv = FindDdeConv(v14, a2);
    v29 = DdeConv;
    v5 = (__int64)DdeConv;
    if ( DdeConv )
    {
      if ( a5
        && *(_QWORD *)(*((_QWORD *)DdeConv + 4) + 56LL)
        && (*(_DWORD *)(*((_QWORD *)v15 + 2) + 640LL) & 0x40000) == 0 )
      {
        return 0;
      }
      if ( gptiCurrent != *((_QWORD *)DdeConv + 2) && *(_WORD *)(gptiCurrent + 624LL) != 1024 )
      {
        UserSetLastError(1408LL, v17);
        return 0;
      }
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17);
      v27[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v27;
      v27[1] = v29;
      _InterlockedAdd((volatile signed __int32 *)v29 + 2, 1u);
      v19 = (struct tagFREELIST *)*((_QWORD *)v29 + 9);
      *((_QWORD *)v29 + 9) = 0LL;
      xxxFreeListFree(v19);
      v22 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v29;
      LOBYTE(v22) = *(_BYTE *)(v22 + gSharedInfo[1] + 25);
      if ( (v22 & 1) != 0 || *a1 != 993 && (*((_DWORD *)v29 + 20) & 6) != 0 )
      {
        v13 = 1;
      }
      else
      {
        v23 = *((_QWORD *)v29 + 7);
        if ( v23 )
        {
          v24 = (*(__int64 (__fastcall **)(unsigned int *, void **, struct tagDDECONV *))(v23 + 32))(a1, a4, v29);
        }
        else if ( (*((_DWORD *)v29 + 20) & 1) != 0 )
        {
          v24 = xxxUnexpectedServerPost(a1, a4, v29);
        }
        else
        {
          v24 = xxxUnexpectedClientPost(a1, a4, v29);
        }
        v13 = v24;
      }
      v5 = ThreadUnlock1(v22, v20, v21);
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
  if ( v13 == 1 && (*(_DWORD *)(gptiCurrent + 480LL) & 1) == 0 )
  {
    v25 = 0x8000LL;
    switch ( (unsigned __int16)*a1 )
    {
      case 0x3E2u:
        v25 = 33025LL;
        break;
      case 0x3E3u:
        break;
      case 0x3E4u:
        v25 = 32769LL;
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
            v25 = 34816LL;
            break;
          }
        }
        v25 = 32899LL;
        break;
    }
    if ( v5 )
    {
      xxxClientFreeDDEHandle(*a4, v25);
      return 3;
    }
  }
  return v13;
}
