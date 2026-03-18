/*
 * XREFs of ?ExpressionValueFromInternalValue@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValue@@@Z @ 0x1801A89C8
 * Callers:
 *     ?GetProperty@CNaturalAnimation@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801A8F30 (-GetProperty@CNaturalAnimation@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1801A98A0 (-ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_S.c)
 * Callees:
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CNaturalAnimation::ExpressionValueFromInternalValue(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 result; // rax
  _BYTE v7[64]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+68h] [rbp-10h]
  char v10; // [rsp+6Ch] [rbp-Ch]
  void *retaddr; // [rsp+78h] [rbp+0h]

  memset_0(v7, 0, sizeof(v7));
  v8 = 0LL;
  v9 = 18;
  v10 = 0;
  CExpressionValue::operator=(a3, (__int64)v7);
  result = *(unsigned int *)(a1 + 144);
  switch ( (_DWORD)result )
  {
    case 0x12:
      *(_DWORD *)a3 = *a2;
      *(_DWORD *)(a3 + 72) = 18;
      break;
    case 0x23:
      *(_DWORD *)(a3 + 72) = 35;
      *(_QWORD *)a3 = *(_QWORD *)a2;
      break;
    case 0x34:
      *(_DWORD *)(a3 + 72) = 52;
      *(_QWORD *)a3 = *(_QWORD *)a2;
      result = (unsigned int)a2[2];
      *(_DWORD *)(a3 + 8) = result;
      break;
    default:
      ModuleFailFastForHRESULT(2147500037LL, retaddr);
  }
  *(_BYTE *)(a3 + 76) = 1;
  return result;
}
