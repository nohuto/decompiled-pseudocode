/*
 * XREFs of ?ExpressionValueFromInternalValue@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValue@@@Z @ 0x1801E3FB8
 * Callers:
 *     ?GetProperty@CNaturalAnimation@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801E4550 (-GetProperty@CNaturalAnimation@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1801E4E10 (-ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSIO.c)
 * Callees:
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800D753C (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CNaturalAnimation::ExpressionValueFromInternalValue(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 result; // rax
  _BYTE v7[64]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v8; // [rsp+60h] [rbp-28h]
  int v9; // [rsp+68h] [rbp-20h]
  char v10; // [rsp+6Ch] [rbp-1Ch]
  const void *retaddr; // [rsp+88h] [rbp+0h]

  memset_0(v7, 0, sizeof(v7));
  v8 = 0LL;
  v9 = 18;
  v10 = 0;
  CExpressionValue::operator=(a3, (__int64)v7);
  result = *(unsigned int *)(a1 + 144);
  switch ( (_DWORD)result )
  {
    case 0x12:
      result = *a2;
      *(_DWORD *)a3 = result;
      *(_DWORD *)(a3 + 72) = 18;
      break;
    case 0x23:
      *(_QWORD *)a3 = *(_QWORD *)a2;
      *(_DWORD *)(a3 + 72) = 35;
      break;
    case 0x34:
      result = a2[2];
      *(_QWORD *)a3 = *(_QWORD *)a2;
      *(_DWORD *)(a3 + 8) = result;
      *(_DWORD *)(a3 + 72) = 52;
      break;
    default:
      ModuleFailFastForHRESULT(-2147467259, retaddr);
  }
  *(_BYTE *)(a3 + 76) = 1;
  return result;
}
