/*
 * XREFs of ?NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z @ 0x180219750
 * Callers:
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800D3DE0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x180089DA0 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xnn @ 0x180165AA0 (McTemplateU0xnn.c)
 *     ?AddMoveRectangle@CDwmMetaRegion@@QEAAJPEBUtagRECT@@PEBUtagPOINT@@@Z @ 0x180180EA0 (-AddMoveRectangle@CDwmMetaRegion@@QEAAJPEBUtagRECT@@PEBUtagPOINT@@@Z.c)
 *     ?ClearAllData@CDwmMetaRegion@@QEAAXXZ @ 0x18021923C (-ClearAllData@CDwmMetaRegion@@QEAAXXZ.c)
 *     McTemplateU0xn @ 0x180219EB4 (McTemplateU0xn.c)
 */

__int64 __fastcall CWindowNode::NotifyMoveOptimization(
        CWindowNode *this,
        const struct tagRECT *a2,
        HRGN *a3,
        const struct tagPOINT *a4)
{
  unsigned int v4; // r14d
  __int64 v5; // r15
  __int64 v6; // rdi
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r9
  int v14; // edx
  int v15; // ecx
  unsigned int v16; // r8d
  signed int v17; // eax
  __int64 v18; // rcx
  void *v19; // rcx
  int v21; // [rsp+28h] [rbp-40h]

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
    CDwmMetaRegion::ClearAllData((CWindowNode *)((char *)this + 976));
  }
  if ( !*((_BYTE *)this + 946) )
  {
    if ( g_DisplayManager )
    {
      v12 = 0LL;
      if ( *((_DWORD *)g_DisplayManager + 18) )
      {
        v13 = *((_QWORD *)g_DisplayManager + 6);
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
                MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x1F6u, 0LL);
              }
              else
              {
                *((_BYTE *)this + 945) = 1;
                if ( a2 )
                  CDwmMetaRegion::AddMoveRectangle((CWindowNode *)((char *)this + 976), a2, a4);
                v19 = (void *)*((_QWORD *)this + 121);
                if ( v19 )
                  DeleteObject(v19);
                *((_QWORD *)this + 121) = 0LL;
              }
              return v4;
            }
            McTemplateU0xnn(
              Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_ETWGUID_DWMUPDATEBLTTRANSLATION_RECT,
              *((_QWORD *)this + 80),
              v13,
              (__int64)a2,
              v21,
              (__int64)this + 712);
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
