/*
 * XREFs of ?ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_SEGMENTUPDATE@@PEBXI@Z @ 0x180215B80
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x18003D0C0 (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?AddMultipleAndSet@?$DynArray@E$0A@@@QEAAJPEFBEI@Z @ 0x180194FB8 (-AddMultipleAndSet@-$DynArray@E$0A@@@QEAAJPEFBEI@Z.c)
 */

__int64 __fastcall CGenericInk::ProcessSegmentUpdate(
        CGenericInk *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GENERICINK_SEGMENTUPDATE *a3,
        const void *a4,
        unsigned int a5)
{
  __int64 v5; // r12
  CGenericInk *v7; // rdi
  unsigned int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  unsigned int v11; // r8d
  int v12; // r14d
  signed int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // edx
  unsigned int v16; // r15d
  unsigned int v17; // eax
  int v18; // esi
  int v19; // r13d
  unsigned int v20; // r14d
  unsigned int v21; // r13d
  unsigned int i; // ebp
  __int64 v23; // r11
  _QWORD *v24; // rcx
  signed int v25; // eax
  __int64 v26; // rcx
  signed int appended; // eax
  __int64 v28; // rcx
  unsigned int v30; // [rsp+20h] [rbp-78h]
  _QWORD v31[2]; // [rsp+40h] [rbp-58h] BYREF

  v5 = 0LL;
  v7 = this;
  if ( *((_DWORD *)a3 + 3) )
  {
    v8 = a5 / *((_DWORD *)a3 + 3);
    if ( !v8 )
    {
      v30 = 485;
LABEL_7:
      v9 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80070057, v30, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, 0x80070057, 0x50u, 0LL);
      return v9;
    }
    this = (CGenericInk *)*((unsigned int *)this + 52);
    if ( (_DWORD)this )
    {
      if ( v8 != (_DWORD)this )
      {
        v30 = 493;
        goto LABEL_7;
      }
    }
    else
    {
      *((_DWORD *)v7 + 52) = v8;
    }
  }
  v11 = *((_DWORD *)v7 + 52);
  if ( v11 )
    v12 = *((_DWORD *)v7 + 50) / v11;
  else
    v12 = 0;
  *((_DWORD *)v7 + 50) = v11 * *((_DWORD *)a3 + 2);
  v13 = DynArray<unsigned char,0>::AddMultipleAndSet((__int64)v7 + 176, a4, a5);
  v9 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x58u, 0LL);
  }
  else
  {
    v15 = *((_DWORD *)a3 + 4);
    v16 = *((_DWORD *)v7 + 30);
    *((_DWORD *)v7 + 53) = v15;
    *((_DWORD *)v7 + 54) = *((_DWORD *)a3 + 5);
    if ( v16 )
    {
      v17 = *((_DWORD *)a3 + 3);
      v18 = *((_DWORD *)a3 + 2);
      v19 = v18 + v17;
      if ( v15 > v17 )
        v18 += v17 - v15;
      v20 = v12 - v18;
      v21 = v19 - v18;
      v31[0] = 0LL;
      v31[1] = 0LL;
      for ( i = 0; i < v16; ++i )
      {
        v24 = v31;
        if ( i )
          v24 = 0LL;
        v23 = *(_QWORD *)(*(_QWORD *)(v5 + *((_QWORD *)v7 + 12)) + 104LL);
        v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD *))(*(_QWORD *)v23 + 48LL))(
                v23,
                v20,
                *((_QWORD *)v7 + 22) + (unsigned int)(v18 * *((_DWORD *)v7 + 52)),
                v21,
                *((_DWORD *)v7 + 53),
                *((_DWORD *)v7 + 52),
                v24);
        v9 = v25;
        if ( v25 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x7Bu, 0LL);
          return v9;
        }
        v5 += 8LL;
      }
      appended = CRegion::AppendRects<tagRECT>((CGenericInk *)((char *)v7 + 232), (__int64)v31, 1u);
      v9 = appended;
      if ( appended >= 0 )
        goto LABEL_24;
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, appended, 0x7Eu, 0LL);
    }
    else
    {
LABEL_24:
      (*(void (__fastcall **)(CGenericInk *, __int64))(*(_QWORD *)v7 + 64LL))(v7, 3LL);
      (*(void (__fastcall **)(CGenericInk *, __int64, CGenericInk *))(*(_QWORD *)v7 + 64LL))(v7, 1LL, v7);
    }
  }
  return v9;
}
