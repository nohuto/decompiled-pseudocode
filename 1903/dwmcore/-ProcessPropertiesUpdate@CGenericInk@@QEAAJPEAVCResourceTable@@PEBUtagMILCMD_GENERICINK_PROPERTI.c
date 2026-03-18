/*
 * XREFs of ?ProcessPropertiesUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_PROPERTIESUPDATE@@PEBXI@Z @ 0x180215A9C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?AddMultipleAndSet@?$DynArray@E$0A@@@QEAAJPEFBEI@Z @ 0x180194FB8 (-AddMultipleAndSet@-$DynArray@E$0A@@@QEAAJPEFBEI@Z.c)
 */

__int64 __fastcall CGenericInk::ProcessPropertiesUpdate(
        CGenericInk *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GENERICINK_PROPERTIESUPDATE *a3,
        const void *a4,
        unsigned int a5)
{
  _QWORD *v5; // r15
  signed int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  unsigned int v10; // ebp
  unsigned int v11; // esi
  __int64 v12; // r14
  __int64 v13; // rcx
  signed int v14; // eax
  __int64 v15; // rcx

  *((_DWORD *)this + 42) = 0;
  v5 = (_QWORD *)((char *)this + 144);
  v7 = DynArray<unsigned char,0>::AddMultipleAndSet((__int64)this + 144, a4, a5);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x36u, 0LL);
  }
  else
  {
    v10 = *((_DWORD *)this + 30);
    v11 = 0;
    if ( v10 )
    {
      v12 = 0LL;
      while ( 1 )
      {
        v13 = *(_QWORD *)(*(_QWORD *)(v12 + *((_QWORD *)this + 12)) + 104LL);
        v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v13 + 40LL))(
                v13,
                *v5,
                *((unsigned int *)this + 42));
        v9 = v14;
        if ( v14 < 0 )
          break;
        ++v11;
        v12 += 8LL;
        if ( v11 >= v10 )
          goto LABEL_6;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x3Du, 0LL);
    }
    else
    {
LABEL_6:
      (*(void (__fastcall **)(CGenericInk *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
    }
  }
  return v9;
}
