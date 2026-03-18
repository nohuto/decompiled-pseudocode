/*
 * XREFs of ?ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z @ 0x1C01ED2F4
 * Callers:
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01EF578 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     xxxTouchTargetWindow @ 0x1C01F0D9C (xxxTouchTargetWindow.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     TouchTargetingClipContact @ 0x1C0242F5C (TouchTargetingClipContact.c)
 */

void __fastcall ClipContact(
        struct tagWND *a1,
        struct tagTOUCHTARGETINGCONTACT *a2,
        __int64 a3,
        const struct tagRECT *a4)
{
  const struct tagRECT *v5; // rbp
  __int64 v6; // rcx
  unsigned int v7; // r14d
  struct tagTOUCHTARGETINGCONTACT *v8; // r15
  __int128 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  int RegionData; // eax
  unsigned int v13; // edi
  __int64 v14; // rax
  __int64 v15; // rbx
  int v16; // eax
  __int128 *v17; // rdi
  __int64 v18; // rsi
  __int128 v19; // [rsp+20h] [rbp-58h] BYREF
  __int128 v20; // [rsp+30h] [rbp-48h] BYREF

  v5 = a4;
  v6 = *((_QWORD *)a1 + 19);
  v7 = a3;
  v8 = a2;
  if ( v6 )
  {
    if ( !(unsigned int)GreGetRgnBox(v6, &v20) )
      return;
    v9 = &v20;
    a4 = v5;
    a3 = v7;
    a2 = v8;
    goto LABEL_13;
  }
  v10 = *((_QWORD *)a1 + 5);
  v11 = *(_QWORD *)(v10 + 168);
  if ( !v11 )
  {
    v9 = &v19;
    v19 = *(_OWORD *)(v10 + 88);
LABEL_13:
    TouchTargetingClipContact(v9, a2, a3, a4, v19, *((_QWORD *)&v19 + 1));
    return;
  }
  RegionData = GreGetRegionData(v11, 0LL, 0LL);
  v13 = RegionData;
  if ( RegionData > 0 )
  {
    v14 = Win32AllocPool(RegionData, 1920103253LL);
    v15 = v14;
    if ( v14 )
    {
      if ( (unsigned int)GreGetRegionData(*(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL), v13, v14) )
      {
        v16 = *(_DWORD *)(v15 + 8);
        v17 = (__int128 *)(v15 + 32);
        if ( v16 > 0 )
        {
          v18 = (unsigned int)v16;
          do
          {
            v19 = *v17;
            ((void (__fastcall *)(__int128 *, struct tagTOUCHTARGETINGCONTACT *, _QWORD, const struct tagRECT *))TouchTargetingClipContact)(
              &v19,
              v8,
              v7,
              v5);
            ++v17;
            --v18;
          }
          while ( v18 );
        }
      }
      Win32FreePool(v15);
    }
  }
}
