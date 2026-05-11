/*
 * XREFs of USBType1PinFormatChange @ 0x1C002F810
 * Callers:
 *     USBType1RenderCreatePin @ 0x1C002FB80 (USBType1RenderCreatePin.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00118E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall USBType1PinFormatChange(PVOID *PointerToPointerToItem)
{
  _DWORD *v1; // r8
  _QWORD *v3; // rdi
  __int64 v4; // rsi
  bool v5; // zf
  NTSTATUS v6; // r8d
  NTSTATUS v7; // eax
  _DWORD *v8; // rcx

  v1 = PointerToPointerToItem[12];
  v3 = PointerToPointerToItem[2];
  v4 = v3[19];
  *((_DWORD *)v3 + 26) = v1[17];
  *(_DWORD *)(v4 + 8) = *((unsigned __int16 *)v1 + 33) * (*((unsigned __int16 *)v1 + 39) >> 3);
  *(_DWORD *)(v4 + 116) = *((_DWORD *)v3 + 26) / 0x3E8u;
  v5 = *(_BYTE *)(v4 + 96) == 0;
  *(_DWORD *)(v4 + 120) = (*((_DWORD *)v3 + 26) % 0x3E8u) << 14;
  if ( !v5 )
    *(_DWORD *)(v4 + 856) = v1[17];
  v6 = _KsEdit(PointerToPointerToItem[1], PointerToPointerToItem, 0x88u, 0x88u, 0x41627845u);
  if ( v6 >= 0 )
  {
    v7 = _KsEdit(PointerToPointerToItem[1], (PVOID *)*PointerToPointerToItem + 15, 0x70u, 0x70u, 0x41627845u);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v8 = (_DWORD *)*((_QWORD *)*PointerToPointerToItem + 15);
      v8[23] = *(_DWORD *)(v4 + 8) * (*((_DWORD *)v3 + 26) / 0x64u);
      v8[24] = *(_DWORD *)(v4 + 8) * (*((_DWORD *)v3 + 26) / 0x64u);
      v8[25] = *(_DWORD *)(v4 + 8);
      if ( *((int *)PointerToPointerToItem + 30) >= 2 )
        return (unsigned int)(*(__int64 (__fastcall **)(PVOID *, _QWORD, _QWORD))(*(_QWORD *)(v3[18] + 128LL) + 64LL))(
                               PointerToPointerToItem,
                               *((unsigned int *)v3 + 26),
                               (unsigned int)v7);
    }
  }
  return (unsigned int)v6;
}
