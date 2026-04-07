/*
 * XREFs of ?FreeTableData@?$CGenericTableMap@W4IMMERSIVE_COLOR_TYPE@@UColorData@ColorCache@@@@CAXPEAU_RTL_GENERIC_TABLE@@PEAX@Z @ 0x18003B4A0
 * Callers:
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x18001CE40 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ??_G?$_Func_impl@U?$_Callable_obj@V_lambda_3578744d90fe0678adb54c3e7f5b6d47_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@XAEBHU_Nil@wistd@@U12@U12@U12@U12@U12@@wistd@@@details@2@XAEBHU_Nil@2@U52@U52@U52@U52@U52@@wistd@@UEAAPEAXI@Z @ 0x18004DAC0 (--_G-$_Func_impl@U-$_Callable_obj@V_lambda_3578744d90fe0678adb54c3e7f5b6d47_@@$0A@@wistd@@V-$fun.c)
 *     ??_GUnifiedTargetRect@CStoryboard@@QEAAPEAXI@Z @ 0x18004DE10 (--_GUnifiedTargetRect@CStoryboard@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CGenericTableMap<enum IMMERSIVE_COLOR_TYPE,ColorCache::ColorData>::FreeTableData(
        struct _RTL_GENERIC_TABLE *Table,
        PVOID Buffer)
{
  (*(void (__fastcall **)(WPF::HeapBase *, PVOID))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, Buffer);
}
