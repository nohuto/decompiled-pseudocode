/*
 * XREFs of ?ProcessFrameInputPreTargeting@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180237E48
 * Callers:
 *     ?ProcessManipulationInfo@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180238120 (-ProcessManipulationInfo@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x1800A9C54 (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??2CEllipseGeometry@@SAPEAX_K@Z @ 0x18019CB70 (--2CEllipseGeometry@@SAPEAX_K@Z.c)
 *     ?ResolveInteractionHandle@CInteraction@@SAXIPEA_KPEAPEAV1@@Z @ 0x1801D6648 (-ResolveInteractionHandle@CInteraction@@SAXIPEA_KPEAPEAV1@@Z.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x1801E37DC (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     ?GetPointerInfoMicroSecTime@QpcTimeConverter@@QEBA_KPEBUtagPOINTER_INFO@@@Z @ 0x180232D18 (-GetPointerInfoMicroSecTime@QpcTimeConverter@@QEBA_KPEBUtagPOINTER_INFO@@@Z.c)
 *     ?IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ @ 0x1802357F8 (-IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ.c)
 *     ?Update@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAVCManipulationFrame@@@Z @ 0x1802359B8 (-Update@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAVCManipulationFrame@@@Z.c)
 *     ?OnNewContact@CGlobalManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x18023779C (-OnNewContact@CGlobalManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ??0CManipulationContext@@QEAA@PEAVCComposition@@@Z @ 0x18023A2C8 (--0CManipulationContext@@QEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@K@Z @ 0x18023B240 (-Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@K@Z.c)
 *     ?OnContactHoverDepart@CManipulationContext@@QEAAXI@Z @ 0x18023B7F8 (-OnContactHoverDepart@CManipulationContext@@QEAAXI@Z.c)
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z @ 0x18023B840 (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z.c)
 */

void __fastcall CGlobalManipulationManager::ProcessFrameInputPreTargeting(
        CGlobalManipulationManager *this,
        struct CManipulationFrame *a2)
{
  const struct DEVICE_INFO *v4; // rax
  int v5; // r12d
  const struct DEVICE_INFO *v6; // r14
  __int64 v7; // r9
  bool IsMousewheelFrame; // r13
  unsigned int v9; // r15d
  QpcTimeConverter *v10; // r8
  __int64 v11; // rsi
  char *v12; // rbx
  unsigned __int64 v13; // rax
  int v14; // ecx
  int v15; // ecx
  unsigned __int64 PointerInfoMicroSecTime; // rax
  unsigned __int64 *v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // ecx
  int v20; // edx
  unsigned int v21; // eax
  __int64 v22; // r10
  CManipulationContext **v23; // rsi
  CManipulationContext *v24; // rax
  unsigned int v25; // eax
  __int64 v26; // r10
  unsigned int v27; // eax
  char v28; // r8
  CManipulationContext *v29; // rcx
  struct CInteraction *v30; // rcx
  bool v31; // [rsp+30h] [rbp-48h]
  struct CInteraction *v32; // [rsp+88h] [rbp+10h] BYREF
  __int64 v33; // [rsp+90h] [rbp+18h] BYREF

  v4 = CPointerDeviceCache::Update(a2);
  v5 = *((_DWORD *)a2 + 36);
  v6 = v4;
  v7 = 360LL;
  if ( v5 != 5 )
    v7 = 352LL;
  *(_QWORD *)((char *)this + v7) = *((_QWORD *)a2 + 28);
  IsMousewheelFrame = CManipulationFrame::IsMousewheelFrame(a2);
  v9 = 0;
  if ( *((_DWORD *)a2 + 4) )
  {
    v10 = (CGlobalManipulationManager *)((char *)this + 384);
    while ( 1 )
    {
      v11 = 248LL * v9;
      v12 = (char *)a2 + v11 + 144;
      if ( v5 != 5 || !*((_BYTE *)v6 + 48) )
        goto LABEL_15;
      v13 = *((_QWORD *)v12 + 7);
      if ( *((_DWORD *)v6 + 8) == 2 )
      {
        v15 = *((_DWORD *)v6 + 7) - HIDWORD(v13);
        *((_DWORD *)v12 + 15) = v13;
        *((_DWORD *)v12 + 14) = v15;
        goto LABEL_14;
      }
      if ( *((_DWORD *)v6 + 8) == 3 )
        break;
      if ( *((_DWORD *)v6 + 8) == 4 )
      {
        *((_DWORD *)v12 + 14) = HIDWORD(v13);
        v14 = *((_DWORD *)v6 + 6);
LABEL_12:
        *((_DWORD *)v12 + 15) = v14 - v13;
      }
LABEL_14:
      *((_QWORD *)v12 + 5) = *((_QWORD *)v12 + 7);
LABEL_15:
      PointerInfoMicroSecTime = QpcTimeConverter::GetPointerInfoMicroSecTime(
                                  v10,
                                  (struct CManipulationFrame *)((char *)a2 + v11 + 144));
      *((_QWORD *)this + 50) = PointerInfoMicroSecTime;
      if ( v5 == 3 )
        *((_QWORD *)this + 51) = PointerInfoMicroSecTime;
      if ( (((*((_DWORD *)v12 + 3) & 0x20006) - 0x20000) & 0xFFFFFFFD) == 0
        || (*((_DWORD *)v12 + 3) & 0x810000) != 0
        || IsMousewheelFrame )
      {
        v17 = (unsigned __int64 *)&v33;
        v18 = *((_QWORD *)a2 + 28);
        if ( (*((_DWORD *)v12 + 3) & 0x800000) != 0 )
          v17 = 0LL;
        v32 = 0LL;
        v19 = *(_DWORD *)((char *)a2 + v11 + 336);
        v33 = v18;
        CInteraction::ResolveInteractionHandle(v19, v17, &v32);
        if ( v32 )
        {
          v20 = *((_DWORD *)v12 + 3);
          if ( (v20 & 0x10000) != 0 || IsMousewheelFrame )
          {
            v27 = ConvertToInputType(v5, v20);
            CGlobalManipulationManager::OnNewContact(
              (__int64)this,
              (__int64)v32,
              *((_DWORD *)v12 + 1),
              v27,
              0,
              v28,
              v31);
            if ( (v12[12] & 1) == 0 )
            {
              v29 = (CManipulationContext *)*((_QWORD *)this + 43);
              if ( v29 )
                CManipulationContext::OnContactHoverDepart(v29, *((_DWORD *)v12 + 1));
            }
          }
          else if ( (v20 & 0x800000) != 0 )
          {
            v21 = ConvertToInputType(v5, v20);
            CGlobalManipulationManager::OnNewContact((__int64)this, v22, *((_DWORD *)v12 + 1), v21, 0, 0, v31);
          }
          else
          {
            v23 = (CManipulationContext **)((char *)this + 344);
            if ( *((_QWORD *)this + 43) )
              goto LABEL_32;
            v24 = (CManipulationContext *)CEllipseGeometry::operator new();
            if ( v24 )
              v24 = CManipulationContext::CManipulationContext(v24, *((struct CComposition **)this + 2));
            Microsoft::WRL::ComPtr<CManipulationContext>::operator=(
              (__int64 (__fastcall ****)(_QWORD))this + 43,
              (__int64 (__fastcall ***)(_QWORD))v24);
            if ( *v23 )
            {
              CManipulationContext::Initialize(*v23, 0, 0LL, 0);
              if ( *v23 )
              {
LABEL_32:
                v25 = ConvertToInputType(*(_DWORD *)v12, *((_DWORD *)v12 + 3));
                CManipulationContext::OnHoverContact(v26, v32, *((unsigned int *)v12 + 1), v25);
              }
            }
          }
          v30 = v32;
          if ( v32 )
          {
            v32 = 0LL;
            (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)v30 + 8LL))(v30);
          }
        }
      }
      ++v9;
      v10 = (CGlobalManipulationManager *)((char *)this + 384);
      if ( v9 >= *((_DWORD *)a2 + 4) )
        return;
    }
    *((_DWORD *)v12 + 14) = *((_DWORD *)v6 + 6) - v13;
    v14 = *((_DWORD *)v6 + 7);
    v13 >>= 32;
    goto LABEL_12;
  }
}
