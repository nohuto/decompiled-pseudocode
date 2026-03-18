/*
 * XREFs of ?InsertAt@?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAJAEBUPointerCaptureInfo@CInputManager@@I@Z @ 0x1C01C58CC
 * Callers:
 *     ?UpdatePointerCapture@CInputManager@@SAJII@Z @ 0x1C01C5A80 (-UpdatePointerCapture@CInputManager@@SAJII@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     ?Grow@?$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C01A646C (-Grow@-$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@IEAAJI@Z.c)
 */

__int64 __fastcall CStructDynamicArray<CInputManager::PointerCaptureInfo>::InsertAt(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3)
{
  int v3; // ebx
  __int64 v5; // rsi
  _QWORD *v7; // r8
  __int64 v8; // r9
  __int64 v9; // r10

  v3 = 0;
  v5 = a3;
  if ( *(_DWORD *)(a1 + 8) != *(_DWORD *)(a1 + 12)
    || (v3 = CDynamicArray<InjectManipulationArgs *,2003858261>::Grow(a1), v3 >= 0) )
  {
    if ( *(_DWORD *)(a1 + 8) >= *(_DWORD *)(a1 + 12) )
      v3 = -1073741823;
    if ( v3 >= 0 )
    {
      v7 = Win32AllocPoolZInit(8uLL, 1685275460LL);
      if ( !v7 )
        v3 = -1073741801;
      if ( v3 < 0 )
      {
        if ( v7 )
          Win32FreePool((__int64)v7);
      }
      else
      {
        *v7 = *a2;
        LODWORD(v8) = *(_DWORD *)(a1 + 8);
        if ( (unsigned int)v8 > (unsigned int)v5 )
        {
          v9 = 8LL * (unsigned int)v8;
          do
          {
            v8 = (unsigned int)(v8 - 1);
            *(_QWORD *)(v9 + *(_QWORD *)a1) = *(_QWORD *)(*(_QWORD *)a1 + 8 * v8);
            v9 -= 8LL;
          }
          while ( (unsigned int)v8 > (unsigned int)v5 );
        }
        *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = v7;
        ++*(_DWORD *)(a1 + 8);
      }
    }
  }
  return (unsigned int)v3;
}
