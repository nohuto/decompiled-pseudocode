/*
 * XREFs of ?GetNodesInPath@CSidebandDevice@@AEAAJKKPEAU_LIST_ENTRY@@@Z @ 0x1C0008D4C
 * Callers:
 *     ?GetNodeOfType@CSidebandDevice@@AEAAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z @ 0x1C0008EE4 (-GetNodeOfType@CSidebandDevice@@AEAAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z.c)
 *     ?GetSidetoneNodes@CSidebandDevice@@AEAAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z @ 0x1C00090CC (-GetSidetoneNodes@CSidebandDevice@@AEAAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     ?RecurseBackward@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x1C0008B08 (-RecurseBackward@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEA.c)
 *     ?RecurseForward@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x1C0008C28 (-RecurseForward@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU.c)
 */

__int64 __fastcall CSidebandDevice::GetNodesInPath(
        CSidebandDevice *this,
        __int64 a2,
        unsigned int a3,
        struct _LIST_ENTRY *a4)
{
  int v6; // r14d
  int v8; // esi
  __int64 v9; // rdi
  unsigned int i; // ebp
  const struct KSTOPOLOGY_CONNECTION *v11; // r8
  int v12; // eax
  struct _LIST_ENTRY *v13; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *Flink; // rax
  int v17; // [rsp+28h] [rbp-30h]

  v6 = a2;
  v8 = -1073741275;
  v9 = *(_QWORD *)(*((_QWORD *)this + 4) + 16LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      9u,
      0x22u,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
  for ( i = 0; i < *(_DWORD *)(v9 + 208); ++i )
  {
    v11 = (const struct KSTOPOLOGY_CONNECTION *)(*(_QWORD *)(v9 + 216) + 16LL * i);
    if ( v11->ToNode == -1 && v11->ToNodePin == v6 )
    {
      v12 = CSidebandDevice::RecurseBackward(this, (struct _KSFILTER_DESCRIPTOR *)(v9 + 128), v11, a3, a4);
    }
    else
    {
      if ( v11->FromNode != -1 || v11->FromNodePin != v6 )
        goto LABEL_12;
      v12 = CSidebandDevice::RecurseForward(this, (struct _KSFILTER_DESCRIPTOR *)(v9 + 128), v11, a3, a4);
    }
    v8 = v12;
LABEL_12:
    if ( v8 >= 0 )
      goto LABEL_19;
  }
  while ( 1 )
  {
    Flink = a4->Flink;
    if ( a4->Flink == a4 )
      break;
    v13 = Flink->Flink;
    if ( Flink->Flink->Blink != Flink || (Blink = Flink->Blink, Blink->Flink != Flink) )
      __fastfail(3u);
    Blink->Flink = v13;
    v13->Blink = Blink;
    ExFreePoolWithTag(Flink, 0x66627845u);
  }
LABEL_19:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v17 = v8;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      9u,
      0x23u,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
      v17);
  }
  return (unsigned int)v8;
}
