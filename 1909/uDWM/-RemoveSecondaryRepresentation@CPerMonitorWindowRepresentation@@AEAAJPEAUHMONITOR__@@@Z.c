/*
 * XREFs of ?RemoveSecondaryRepresentation@CPerMonitorWindowRepresentation@@AEAAJPEAUHMONITOR__@@@Z @ 0x1800B6CD0
 * Callers:
 *     ?Validate@CPerMonitorWindowRepresentation@@QEAAJPEAVCWindowData@@@Z @ 0x1800B6DEC (-Validate@CPerMonitorWindowRepresentation@@QEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180036620 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?FindSecondaryRepresentation@CPerMonitorWindowRepresentation@@AEAAPEAUSecondaryRepresentation@1@PEAUHMONITOR__@@@Z @ 0x1800B6C98 (-FindSecondaryRepresentation@CPerMonitorWindowRepresentation@@AEAAPEAUSecondaryRepresentation@1@.c)
 */

__int64 __fastcall CPerMonitorWindowRepresentation::RemoveSecondaryRepresentation(
        CPerMonitorWindowRepresentation *this,
        HMONITOR a2)
{
  unsigned int v3; // ebx
  struct CPerMonitorWindowRepresentation::SecondaryRepresentation *SecondaryRepresentation; // rax
  struct CPerMonitorWindowRepresentation::SecondaryRepresentation *v5; // rdi
  unsigned int v6; // ecx
  __int64 v7; // r8
  __int64 i; // r9
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx

  v3 = 0;
  SecondaryRepresentation = CPerMonitorWindowRepresentation::FindSecondaryRepresentation(this, a2);
  v5 = SecondaryRepresentation;
  if ( SecondaryRepresentation )
  {
    v6 = *((_DWORD *)this + 14);
    v7 = 0LL;
    for ( i = *((_QWORD *)this + 4); (unsigned int)v7 < v6; v7 = (unsigned int)(v7 + 1) )
    {
      if ( SecondaryRepresentation == *(struct CPerMonitorWindowRepresentation::SecondaryRepresentation **)(i + 8 * v7) )
        break;
    }
    if ( (unsigned int)v7 < v6 )
    {
      if ( (unsigned int)v7 < v6 - 1 )
      {
        do
        {
          v9 = (unsigned int)v7;
          v10 = (unsigned int)(v7 + 1);
          v7 = v10;
          *(_QWORD *)(i + 8 * v9) = *(_QWORD *)(i + 8 * v10);
          v6 = *((_DWORD *)this + 14);
        }
        while ( (unsigned int)v10 < v6 - 1 );
      }
      v3 = 1;
      *((_DWORD *)this + 14) = v6 - 1;
    }
    v11 = *((_QWORD *)this + 3);
    if ( v11
      && (v12 = VisualCollection::Remove(
                  (VisualCollection *)(v11 + 32),
                  *(struct CVisual **)(*((_QWORD *)SecondaryRepresentation + 1) + 96LL)),
          v3 = v12,
          v12 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x14Au);
    }
    else
    {
      v13 = *((_QWORD *)v5 + 1);
      if ( *(_QWORD *)(v13 + 96) )
      {
        CBaseObject::Release(*(CBaseObject **)(v13 + 96));
        *(_QWORD *)(*((_QWORD *)v5 + 1) + 96LL) = 0LL;
        v13 = *((_QWORD *)v5 + 1);
      }
      if ( v13 )
      {
        (**(void (__fastcall ***)(__int64, __int64, __int64, __int64))v13)(v13, 1LL, v7, i);
        *((_QWORD *)v5 + 1) = 0LL;
      }
      (*(void (__fastcall **)(WPF::HeapBase *, struct CPerMonitorWindowRepresentation::SecondaryRepresentation *, __int64, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v5,
        v7,
        i);
    }
  }
  return v3;
}
