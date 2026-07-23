/*
 * XREFs of VfPnpVerifyIrpStackUpward @ 0x1409417B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ViErrorReport1 @ 0x14030B12C (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x14030B1B0 (ViErrorReport10.c)
 *     PpvUtilIsPdo @ 0x140925B88 (PpvUtilIsPdo.c)
 *     IovUtilGetBottomDeviceObjectWithTag @ 0x140936490 (IovUtilGetBottomDeviceObjectWithTag.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x1409364F4 (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilIsDeviceObjectMarked @ 0x1409365A0 (IovUtilIsDeviceObjectMarked.c)
 *     IovUtilIsWdmStack @ 0x140936738 (IovUtilIsWdmStack.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140941A7C (ViPnpVerifyMinorWasProcessedProperly.c)
 */

__int64 __fastcall VfPnpVerifyIrpStackUpward(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 result; // rax
  const void *v10; // rbp
  __int64 v11; // r12
  const void *v12; // rsi
  int v13; // ebx
  int v14; // ecx
  int v15; // r14d
  unsigned int v16; // ecx
  void *LowerDeviceObjectWithTag; // rax
  _QWORD *v18; // rbx
  _QWORD *BottomDeviceObjectWithTag; // rax
  void *v20; // r8
  BOOL v21; // ebx
  const void *v22; // r9

  result = IovUtilIsWdmStack(*(_QWORD **)(a2 + 40));
  if ( !(_DWORD)result )
    return result;
  v10 = *(const void **)a1;
  v11 = *(_QWORD *)(a1 + 240);
  v12 = *(const void **)(a4 + 40);
  v13 = *(_DWORD *)(*(_QWORD *)a1 + 48LL);
  if ( !a5 )
    goto LABEL_16;
  result = *(unsigned int *)(a4 + 4);
  v14 = *(_DWORD *)(a1 + 56) & 0x20;
  v15 = *(_DWORD *)(a4 + 4) & 0x10000000;
  if ( (int)result < 0 )
    goto LABEL_14;
  if ( v15 )
  {
LABEL_15:
    result = ViPnpVerifyMinorWasProcessedProperly(
               (_DWORD)v10,
               a2,
               0,
               (unsigned int)(v13 != -1073741637) + 1,
               (__int64)v12,
               0);
    goto LABEL_16;
  }
  if ( *(_BYTE *)(a2 + 1) == 8 )
    goto LABEL_14;
  if ( v14 )
  {
    v16 = 557;
    goto LABEL_24;
  }
  result = v13 + 0x80000000;
  if ( (int)result >= 0 && v13 != -1073741637 )
    goto LABEL_14;
  result = (unsigned int)VfIoSwitchedOffNoReboot;
  if ( VfIoSwitchedOffNoReboot )
    goto LABEL_16;
  if ( v13 >= 0 )
  {
    v16 = 558;
LABEL_24:
    result = ViErrorReport1(v16, *(const void **)(a4 + 40), v10);
    goto LABEL_16;
  }
  if ( v13 == -1073741637 )
  {
    result = ViErrorReport1(0x22Fu, *(const void **)(a4 + 40), v10);
LABEL_14:
    if ( v15 )
      goto LABEL_15;
LABEL_16:
    if ( v13 == -1073741637 && (*(_DWORD *)(a3 + 4) & 0x2000000) == 0 && *(_DWORD *)(a3 + 96) != -1073741637 )
    {
      result = ViErrorReport1(0x216u, v12, v10);
      *(_DWORD *)(a3 + 4) |= 0x2000000u;
    }
  }
  if ( *(_BYTE *)(a2 + 1) == 23 )
  {
    LowerDeviceObjectWithTag = IovUtilGetLowerDeviceObjectWithTag(*(_QWORD *)(a2 + 40));
    if ( LowerDeviceObjectWithTag )
    {
      ObfDereferenceObjectWithTag(LowerDeviceObjectWithTag, 0x49667256u);
    }
    else
    {
      v18 = *(_QWORD **)(a2 + 40);
      BottomDeviceObjectWithTag = IovUtilGetBottomDeviceObjectWithTag(v18);
      v20 = BottomDeviceObjectWithTag;
      v21 = BottomDeviceObjectWithTag == v18 && PpvUtilIsPdo((__int64)BottomDeviceObjectWithTag);
      ObfDereferenceObjectWithTag(v20, 0x49667256u);
      if ( !v21 )
        ViErrorReport10(0x241u, v12, *(const void **)(v11 + 64), *(const void **)(a2 + 40));
    }
    result = IovUtilIsDeviceObjectMarked(*(_QWORD *)(a2 + 40), 0);
    if ( (_DWORD)result )
      return ViErrorReport10(0x242u, v12, *(const void **)(v11 + 64), v22);
  }
  return result;
}
