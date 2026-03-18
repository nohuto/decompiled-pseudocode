/*
 * XREFs of ?GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z @ 0x1C000650C
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x1C00E7E10 (DxgkGetAdapterDeviceDesc.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00EA0DC (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::GetDeviceDescriptor(DXGADAPTER *this, unsigned int a2, unsigned __int16 *a3)
{
  __int64 v3; // r9
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // r9
  unsigned __int16 v7; // ax
  unsigned __int16 *v8; // rax
  bool v9; // zf

  v3 = *((_QWORD *)this + 175);
  if ( v3 )
  {
    v4 = (unsigned __int64)a2 >> 1;
    if ( v4 )
    {
      v5 = 2147483646 - v4;
      v6 = v3 - (_QWORD)a3;
      do
      {
        if ( !(v5 + v4) )
          break;
        v7 = *(unsigned __int16 *)((char *)a3 + v6);
        if ( !v7 )
          break;
        *a3++ = v7;
        --v4;
      }
      while ( v4 );
      v8 = a3 - 1;
      if ( v4 )
        v8 = a3;
      *v8 = 0;
      return;
    }
    v9 = 1;
  }
  else
  {
    v9 = a3 == 0LL;
  }
  if ( !v9 )
    *a3 = 0;
}
