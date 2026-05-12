/*
 * XREFs of RaDriverCloseIrp @ 0x1C006A740
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitCreateIrp @ 0x1C00107AC (RaUnitCreateIrp.c)
 *     RaidHandleCreateCloseIrp @ 0x1C00107C4 (RaidHandleCreateCloseIrp.c)
 *     WPP_SF_qq @ 0x1C003BBF8 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C003BC48 (WPP_SF_qqD.c)
 */

__int64 __fastcall RaDriverCloseIrp(__int64 a1, __int64 a2)
{
  _DWORD *v4; // r8
  unsigned int Irp; // eax
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+28h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xEu,
      (__int64)&WPP_fca335724287372554e4fcd7cdd207c8_Traceguids,
      a1,
      a2);
  }
  *(_BYTE *)(a2 + 141) = -88;
  v4 = *(_DWORD **)(a1 + 64);
  if ( *v4 )
  {
    if ( *v4 != 1 )
    {
      v6 = -1073741823;
      goto LABEL_7;
    }
    Irp = RaUnitCreateIrp(*(_QWORD *)(a1 + 64));
  }
  else
  {
    Irp = RaidHandleCreateCloseIrp(v4[22], (IRP *)a2);
  }
  v6 = Irp;
LABEL_7:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    v8 = v6;
    WPP_SF_qqD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xFu,
      (__int64)&WPP_fca335724287372554e4fcd7cdd207c8_Traceguids,
      a1,
      a2,
      v8);
  }
  return v6;
}
