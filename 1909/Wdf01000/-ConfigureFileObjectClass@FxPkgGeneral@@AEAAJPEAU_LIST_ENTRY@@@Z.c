/*
 * XREFs of ?ConfigureFileObjectClass@FxPkgGeneral@@AEAAJPEAU_LIST_ENTRY@@@Z @ 0x1C0091D08
 * Callers:
 *     ?Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C00920E4 (-Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqDD @ 0x1C005D530 (WPP_IFR_SF_qqDD.c)
 *     WPP_IFR_SF_qqdqdd @ 0x1C0068B3C (WPP_IFR_SF_qqdqdd.c)
 */

__int64 __fastcall FxPkgGeneral::ConfigureFileObjectClass(FxPkgGeneral *this, _LIST_ENTRY *FileObjInfoList)
{
  _LIST_ENTRY *Blink; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  signed int Flink; // edi
  _LIST_ENTRY *v7; // r14
  signed int _a4; // ecx
  _LIST_ENTRY *v9; // rax
  FxDeviceBase *m_DeviceBase; // rdx
  const void *_a3; // r8
  unsigned __int64 m_Driver; // rdx
  unsigned __int16 v13; // ax
  const void *_a2; // rdx
  unsigned int v15; // ebp
  _LIST_ENTRY *v17; // r10
  _LIST_ENTRY *v18; // r8
  FxDeviceBase *v19; // rdx
  int _a6; // edi
  __int16 v21; // ax
  const void *v22; // r10
  int v23; // ecx
  unsigned __int64 v24; // r8
  unsigned __int16 v25; // ax
  const void *v26; // r8
  bool v27; // zf
  unsigned __int16 m_ObjectSize; // ax
  const void *v29; // rdx

  Blink = FileObjInfoList->Blink;
  m_Globals = this->m_Globals;
  Flink = 1;
  v7 = 0LL;
  if ( Blink == FileObjInfoList )
  {
LABEL_16:
    v15 = 0;
    LODWORD(this->m_DeviceBase[1].m_DisposeSingleEntry.Next) = Flink;
    return v15;
  }
  while ( 1 )
  {
    _a4 = (signed int)Blink[5].Flink;
    if ( _a4 == 1 || Flink == _a4 )
      goto LABEL_15;
    if ( Flink != 1 )
      break;
    v7 = Blink[9].Blink;
    Flink = (signed int)Blink[5].Flink;
LABEL_15:
    Blink = Blink->Blink;
    if ( Blink == FileObjInfoList )
      goto LABEL_16;
  }
  if ( Flink < 0 == _a4 < 0 )
  {
    v9 = Blink[9].Blink;
    m_DeviceBase = this->m_DeviceBase;
    _a3 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    Flink = ((_a4 >= 0) << 31) - 2147483644;
    if ( !m_DeviceBase->m_ObjectSize )
      _a3 = 0LL;
    if ( v9 )
      m_Driver = (unsigned __int64)v9[1].Flink;
    else
      m_Driver = (unsigned __int64)m_DeviceBase->m_Driver;
    v13 = *(_WORD *)(m_Driver + 10);
    _a2 = (const void *)(m_Driver ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v13 )
      _a2 = 0LL;
    WPP_IFR_SF_qqDD(m_Globals, 4u, (unsigned int)_a3, 0x10u, WPP_FxPkgGeneral_cpp_Traceguids, _a2, _a3, _a4, Flink);
    goto LABEL_15;
  }
  v15 = -1073741808;
  v17 = v7[1].Flink;
  v18 = Blink[9].Blink;
  v19 = this->m_DeviceBase;
  _a6 = (unsigned int)Flink >> 31;
  v21 = WORD1(v17->Blink);
  v22 = (const void *)((unsigned __int64)v17 ^ 0xFFFFFFFFFFFFFFF8uLL);
  v23 = (unsigned int)_a4 >> 31;
  if ( !v21 )
    v22 = 0LL;
  if ( v18 )
    v24 = (unsigned __int64)v18[1].Flink;
  else
    v24 = (unsigned __int64)v19->m_Driver;
  v25 = *(_WORD *)(v24 + 10);
  v26 = (const void *)(v24 ^ 0xFFFFFFFFFFFFFFF8uLL);
  v27 = v25 == 0;
  m_ObjectSize = v19->m_ObjectSize;
  if ( v27 )
    v26 = 0LL;
  v29 = (const void *)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v29 = 0LL;
  WPP_IFR_SF_qqdqdd(
    m_Globals,
    (unsigned __int8)v29,
    0x12u,
    0xFu,
    WPP_FxPkgGeneral_cpp_Traceguids,
    v29,
    v26,
    v23,
    v22,
    _a6,
    -1073741808);
  FxVerifierDbgBreakPoint(m_Globals);
  return v15;
}
