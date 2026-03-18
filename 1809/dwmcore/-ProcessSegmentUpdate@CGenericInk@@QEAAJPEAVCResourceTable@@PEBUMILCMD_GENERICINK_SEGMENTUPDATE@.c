/*
 * XREFs of ?ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_SEGMENTUPDATE@@PEBXI@Z @ 0x1801995FC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x1800A7240 (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?AddMultipleAndSet@?$DynArray@E$0A@@@QEAAJPEFBEI@Z @ 0x18015BD88 (-AddMultipleAndSet@-$DynArray@E$0A@@@QEAAJPEFBEI@Z.c)
 */

__int64 __fastcall CGenericInk::ProcessSegmentUpdate(
        CGenericInk *this,
        struct CResourceTable *a2,
        const struct MILCMD_GENERICINK_SEGMENTUPDATE *a3,
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
  int appended; // eax
  __int64 v14; // rcx
  unsigned int v15; // edx
  unsigned int v16; // r15d
  unsigned int v17; // eax
  int v18; // esi
  int v19; // r13d
  unsigned int v20; // r14d
  unsigned int v21; // r13d
  unsigned int i; // ebp
  __int64 v23; // r10
  _QWORD *v24; // rcx
  unsigned int v26; // [rsp+20h] [rbp-78h]
  unsigned int v27; // [rsp+20h] [rbp-78h]
  _QWORD v28[2]; // [rsp+40h] [rbp-58h] BYREF

  v5 = 0LL;
  v7 = this;
  if ( !*((_DWORD *)a3 + 3) )
    goto LABEL_9;
  v8 = a5 / *((_DWORD *)a3 + 3);
  if ( v8 )
  {
    this = (CGenericInk *)*((unsigned int *)this + 50);
    if ( (_DWORD)this )
    {
      if ( v8 != (_DWORD)this )
      {
        v26 = 370;
        goto LABEL_7;
      }
    }
    else
    {
      *((_DWORD *)v7 + 50) = v8;
    }
LABEL_9:
    v11 = *((_DWORD *)v7 + 50);
    if ( v11 )
      v12 = *((_DWORD *)v7 + 48) / v11;
    else
      v12 = 0;
    *((_DWORD *)v7 + 48) = v11 * *((_DWORD *)a3 + 2);
    appended = DynArray<unsigned char,0>::AddMultipleAndSet((__int64)v7 + 168, a4, a5);
    v9 = appended;
    if ( appended < 0 )
    {
      v27 = 96;
    }
    else
    {
      v15 = *((_DWORD *)a3 + 4);
      v16 = *((_DWORD *)v7 + 28);
      *((_DWORD *)v7 + 51) = v15;
      *((_DWORD *)v7 + 52) = *((_DWORD *)a3 + 5);
      if ( !v16 )
      {
LABEL_24:
        (*(void (__fastcall **)(CGenericInk *, __int64))(*(_QWORD *)v7 + 64LL))(v7, 3LL);
        (*(void (__fastcall **)(CGenericInk *, __int64, CGenericInk *))(*(_QWORD *)v7 + 64LL))(v7, 1LL, v7);
        return v9;
      }
      v17 = *((_DWORD *)a3 + 3);
      v18 = *((_DWORD *)a3 + 2);
      v19 = v18 + v17;
      if ( v15 > v17 )
        v18 += v17 - v15;
      v20 = v12 - v18;
      v21 = v19 - v18;
      v28[0] = 0LL;
      v28[1] = 0LL;
      for ( i = 0; i < v16; ++i )
      {
        v24 = v28;
        if ( i )
          v24 = 0LL;
        v23 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 11) + v5) + 104LL);
        appended = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD *))(*(_QWORD *)v23 + 48LL))(
                     v23,
                     v20,
                     *((_QWORD *)v7 + 21) + (unsigned int)(v18 * *((_DWORD *)v7 + 50)),
                     v21,
                     *((_DWORD *)v7 + 51),
                     *((_DWORD *)v7 + 50),
                     v24);
        v9 = appended;
        if ( appended < 0 )
        {
          v27 = 131;
          goto LABEL_26;
        }
        v5 += 8LL;
      }
      appended = CRegion::AppendRects<tagRECT>((struct FastRegion::Internal::CRgnData **)v7 + 28, (__int64)v28, 1u);
      v9 = appended;
      if ( appended >= 0 )
        goto LABEL_24;
      v27 = 134;
    }
LABEL_26:
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, appended, v27);
    return v9;
  }
  v26 = 362;
LABEL_7:
  v9 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, v26);
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024809, 0x58u);
  return v9;
}
