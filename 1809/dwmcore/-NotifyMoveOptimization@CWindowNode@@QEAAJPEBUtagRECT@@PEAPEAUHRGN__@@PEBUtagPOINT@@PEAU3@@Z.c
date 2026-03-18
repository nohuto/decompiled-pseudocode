/*
 * XREFs of ?NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z @ 0x1801B9A44
 * Callers:
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180075DB0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?ClearAllData@CDwmMetaRegion@@QEAAXXZ @ 0x18006A8EC (-ClearAllData@CDwmMetaRegion@@QEAAXXZ.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x1800A8E54 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?AddMoveRectangle@CDwmMetaRegion@@QEAAJPEBUtagRECT@@PEBUtagPOINT@@@Z @ 0x18017F244 (-AddMoveRectangle@CDwmMetaRegion@@QEAAJPEBUtagRECT@@PEBUtagPOINT@@@Z.c)
 *     McTemplateU0xn @ 0x1801BA204 (McTemplateU0xn.c)
 *     McTemplateU0xnn @ 0x1801BA280 (McTemplateU0xnn.c)
 */

__int64 __fastcall CWindowNode::NotifyMoveOptimization(
        CWindowNode *this,
        const struct tagRECT *a2,
        HRGN *a3,
        const struct tagPOINT *a4)
{
  unsigned int v4; // esi
  __int64 v5; // r15
  __int64 v6; // rdi
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r9
  int v14; // edx
  int v15; // ecx
  unsigned int v16; // r8d
  int v17; // eax
  __int64 v18; // rcx
  void *v19; // rcx

  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 64LL);
  if ( *(_DWORD *)(v10 + 80) )
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(v10 + 56) + 8 * v6);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, const struct tagRECT *, HRGN *))(*(_QWORD *)v11 + 264LL))(
             v11,
             a2,
             a3) )
      {
        break;
      }
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= *(_DWORD *)(v10 + 80) )
        goto LABEL_6;
    }
    v5 = *(_QWORD *)(*(_QWORD *)(v10 + 56) + 8 * v6);
  }
LABEL_6:
  if ( *((char *)this + 93) < 0 )
  {
    *((_DWORD *)this + 156) = 0;
    *((_DWORD *)this + 158) = 0;
    *((_DWORD *)this + 157) = 1;
    *((_BYTE *)this + 93) &= ~0x80u;
    CDwmMetaRegion::ClearAllData((CWindowNode *)((char *)this + 992));
  }
  if ( !*((_BYTE *)this + 964) )
  {
    if ( qword_180308258 )
    {
      v12 = 0LL;
      if ( *((_DWORD *)qword_180308258 + 18) )
      {
        v13 = *((_QWORD *)qword_180308258 + 6);
        while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v13 + 8 * v12)) )
        {
          v12 = (unsigned int)(v14 + 1);
          if ( (unsigned int)v12 >= v16 )
            return v4;
        }
        if ( v5 )
        {
          if ( a2 )
          {
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0 )
            {
LABEL_21:
              v17 = (*(__int64 (__fastcall **)(__int64, CWindowNode *))(*(_QWORD *)v5 + 224LL))(v5, this);
              v4 = v17;
              if ( v17 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x1F6u);
              }
              else
              {
                *((_BYTE *)this + 963) = 1;
                if ( a2 )
                  CDwmMetaRegion::AddMoveRectangle((CWindowNode *)((char *)this + 992), a2, a4);
                v19 = (void *)*((_QWORD *)this + 123);
                if ( v19 )
                  DeleteObject(v19);
                *((_QWORD *)this + 123) = 0LL;
              }
              return v4;
            }
            McTemplateU0xnn(
              (unsigned int)Microsoft_Windows_Dwm_Core_Provider_Context,
              (unsigned int)&EVTDESC_ETWGUID_DWMUPDATEBLTTRANSLATION_RECT,
              *((_QWORD *)this + 80),
              v13,
              (__int64)a2);
          }
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            McTemplateU0xn(v15, v14, *((_QWORD *)this + 80), v13, (__int64)a4);
          goto LABEL_21;
        }
      }
    }
  }
  return v4;
}
