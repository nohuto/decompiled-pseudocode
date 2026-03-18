/*
 * XREFs of ?ReadVirtualFunctionConfig@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIG@@@Z @ 0x1C0215B30
 * Callers:
 *     <none>
 * Callees:
 *     DpReadDeviceSpace @ 0x1C001EB80 (DpReadDeviceSpace.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::ReadVirtualFunctionConfig(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_READVIRTUALFUNCTIONCONFIG *a2)
{
  int v4; // esi
  __int64 v5; // r15
  __int64 Offset; // rcx
  ULONG Length; // edx
  __int64 v8; // rax
  size_t v9; // r8
  _BYTE *v10; // rdx
  PVOID Data; // rcx
  unsigned int v12; // edi
  _BYTE *i; // r14
  ULONG v14; // edx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  _BYTE Src[168]; // [rsp+0h] [rbp-100h] BYREF
  ULONG v21; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v22; // [rsp+C0h] [rbp-40h]
  __int64 v23; // [rsp+C8h] [rbp-38h]

  v4 = 0;
  if ( !g_PciConfig.VendorID )
  {
    dword_1C00A3FD2 = 458894;
    g_PciConfig.VendorID = 5140;
    dword_1C00A3FD6 = 16;
    dword_1C00A3FDA = 770;
    word_1C00A3FDE = 0;
    qword_1C00A3FE0 = 0LL;
    qword_1C00A3FE8 = 0LL;
    qword_1C00A3FF0 = 0LL;
    dword_1C00A3FF8 = 0;
    qword_1C00A3FFC = 0LL;
    qword_1C00A4004 = 64LL;
    dword_1C00A400C = 0;
  }
  v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 192LL);
  Offset = a2->Offset;
  if ( (unsigned int)Offset < 0xC0 || (Length = a2->Length, Length + (unsigned int)Offset > 0xD0) )
  {
    v12 = 0;
    for ( i = a2->Data; v12 < a2->Length; ++v12 )
    {
      v14 = v12 + a2->Offset;
      if ( v14 < 0x100 )
      {
        if ( v14 >= 4 || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 308LL) & 4) != 0 )
        {
          i[v12] = *((_BYTE *)&g_PciConfig.VendorID + v14);
        }
        else
        {
          v21 = 0;
          v4 = DpReadDeviceSpace(v5, 0LL, &i[v12], v14, 1u, &v21);
          if ( v4 < 0 || v21 != 1 )
          {
            v18 = WdLogNewEntry5_WdError(v16, v15, v17);
            *(_QWORD *)(v18 + 24) = a2->VirtualFunctionIndex;
            WdLogEvent5_WdError(v18);
            return (unsigned int)v4;
          }
        }
      }
      else
      {
        i[v12] = 0;
      }
    }
  }
  else
  {
    v8 = *(_QWORD *)((char *)this + 28);
    v9 = Length;
    v10 = &Src[Offset];
    v23 = 0LL;
    Data = a2->Data;
    v22 = v8;
    memmove(Data, v10, v9);
  }
  return (unsigned int)v4;
}
