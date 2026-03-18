/*
 * XREFs of ?ReadVirtualFunctionConfig@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIG@@@Z @ 0x1C01E6140
 * Callers:
 *     <none>
 * Callees:
 *     DpReadDeviceSpace @ 0x1C001E750 (DpReadDeviceSpace.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::ReadVirtualFunctionConfig(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_READVIRTUALFUNCTIONCONFIG *a2)
{
  int v4; // esi
  __int64 v5; // r15
  __int64 Offset; // rcx
  ULONG Length; // edx
  size_t v8; // r8
  _BYTE *v9; // rdx
  PVOID Data; // rcx
  unsigned int v11; // edi
  _BYTE *i; // r14
  ULONG v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rax
  _BYTE Src[168]; // [rsp+0h] [rbp-100h] BYREF
  ULONG v18; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v19; // [rsp+C0h] [rbp-40h]
  __int64 v20; // [rsp+C8h] [rbp-38h]

  v4 = 0;
  if ( !g_PciConfig.VendorID )
  {
    dword_1C008FF92 = 458894;
    g_PciConfig.VendorID = 5140;
    dword_1C008FF96 = 16;
    dword_1C008FF9A = 770;
    word_1C008FF9E = 0;
    qword_1C008FFA0 = 0LL;
    qword_1C008FFA8 = 0LL;
    qword_1C008FFB0 = 0LL;
    dword_1C008FFB8 = 0;
    qword_1C008FFBC = 0LL;
    qword_1C008FFC4 = 64LL;
    dword_1C008FFCC = 0;
  }
  v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 192LL);
  Offset = a2->Offset;
  if ( (unsigned int)Offset < 0xC0 || (Length = a2->Length, Length + (unsigned int)Offset > 0xD0) )
  {
    v11 = 0;
    for ( i = a2->Data; v11 < a2->Length; ++v11 )
    {
      v13 = v11 + a2->Offset;
      if ( v13 < 0x100 )
      {
        if ( v13 >= 4 || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 308LL) & 4) != 0 )
        {
          i[v11] = *((_BYTE *)&g_PciConfig.VendorID + v13);
        }
        else
        {
          v18 = 0;
          v4 = DpReadDeviceSpace(v5, 0LL, &i[v11], v13, 1u, &v18);
          if ( v4 < 0 || v18 != 1 )
          {
            v15 = WdLogNewEntry5_WdError(v14);
            *(_QWORD *)(v15 + 24) = a2->VirtualFunctionIndex;
            WdLogEvent5_WdError(v15);
            return (unsigned int)v4;
          }
        }
      }
      else
      {
        i[v11] = 0;
      }
    }
  }
  else
  {
    v8 = Length;
    v20 = 0LL;
    v9 = &Src[Offset];
    Data = a2->Data;
    v19 = *(_QWORD *)((char *)this + 28);
    memmove(Data, v9, v8);
  }
  return (unsigned int)v4;
}
