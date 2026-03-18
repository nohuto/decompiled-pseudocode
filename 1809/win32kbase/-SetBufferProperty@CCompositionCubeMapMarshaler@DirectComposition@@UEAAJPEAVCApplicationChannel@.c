/*
 * XREFs of ?SetBufferProperty@CCompositionCubeMapMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0171E20
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019A40 (Win32AllocPoolWithQuotaZInit.c)
 */

__int64 __fastcall DirectComposition::CCompositionCubeMapMarshaler::SetBufferProperty(
        DirectComposition::CCompositionCubeMapMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        unsigned int *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  int v8; // r8d
  unsigned int v9; // ebp
  unsigned __int64 v10; // rsi
  bool v11; // r15
  void *v12; // rax
  __int64 v13; // rdx

  v6 = 0;
  *a6 = 0;
  v8 = a3 - 1;
  if ( !v8 )
  {
    if ( a5 == 16 )
    {
      v13 = *((unsigned int *)this + 14);
      if ( (unsigned int)v13 < 6 * *((_DWORD *)this + 16) )
      {
        *((_DWORD *)this + 4) |= 0x40u;
        *(_OWORD *)(*((_QWORD *)this + 5) + 24 * v13 + 8) = *(_OWORD *)a4;
        goto LABEL_11;
      }
    }
    return (unsigned int)-1073741811;
  }
  if ( v8 != 1 )
    return (unsigned int)-1073741811;
  v6 = a5 != 12 ? 0xC000000D : 0;
  if ( a5 == 12 )
  {
    *((_DWORD *)this + 4) |= 0x20u;
    v9 = *a4;
    v10 = a4[1];
    v11 = a4[2] != 0;
    if ( *a4 && (unsigned int)(v10 - 1) <= 0x1E && v9 >= 1 << v10 )
    {
      if ( !is_mul_ok(v10, 0x90uLL) )
        return (unsigned int)-1073741675;
      v6 = 0;
      v12 = Win32AllocPoolWithQuotaZInit(144LL * a4[1], 0x6D634344u);
      if ( !v12 )
        return (unsigned int)-1073741801;
      *((_QWORD *)this + 5) = v12;
      *((_DWORD *)this + 15) = v9;
      *((_DWORD *)this + 12) = 6 * v10;
      *((_DWORD *)this + 16) = v10;
      *((_BYTE *)this + 68) = v11;
LABEL_11:
      *a6 = 1;
      return v6;
    }
    return (unsigned int)-1073741811;
  }
  return v6;
}
