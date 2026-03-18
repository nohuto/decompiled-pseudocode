/*
 * XREFs of ?Grow@?$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C016B058
 * Callers:
 *     ?Add@?$CStructDynamicArray@UInjectManipulationArgs@@@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x1C016ABDC (-Add@-$CStructDynamicArray@UInjectManipulationArgs@@@@QEAAJAEBUInjectManipulationArgs@@@Z.c)
 *     ?CaptureManipulationToCompositor@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_K@Z @ 0x1C016D120 (-CaptureManipulationToCompositor@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationC.c)
 *     ?InsertAt@?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAJAEBUPointerCaptureInfo@CInputManager@@I@Z @ 0x1C018340C (-InsertAt@-$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAJAEBUPointerCaptureInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 */

__int64 __fastcall CDynamicArray<InjectManipulationArgs *,2003858261>::Grow(__int64 a1)
{
  unsigned int v1; // esi
  unsigned int v3; // ebx
  void *v4; // rax
  void *v5; // rbp

  v1 = -1;
  if ( *(_DWORD *)(a1 + 8) != -1 )
    v1 = *(_DWORD *)(a1 + 8) + 1;
  v3 = *(_DWORD *)(a1 + 8) == -1 ? 0xC0000095 : 0;
  if ( *(_DWORD *)(a1 + 8) != -1 && v1 > *(_DWORD *)(a1 + 12) )
  {
    v3 = 0;
    if ( is_mul_ok(v1, 8uLL) )
    {
      v4 = (void *)Win32AllocPool(8LL * v1, 0x77707355u);
      v5 = v4;
      if ( v4 )
      {
        if ( *(_QWORD *)a1 )
        {
          memmove(v4, *(const void **)a1, 8LL * *(unsigned int *)(a1 + 8));
          Win32FreePool(*(_QWORD *)a1);
        }
        *(_QWORD *)a1 = v5;
        *(_DWORD *)(a1 + 12) = v1;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      return (unsigned int)-1073741675;
    }
  }
  return v3;
}
