/*
 * XREFs of CopyObjBuffer @ 0x1C002CBF4
 * Callers:
 *     ExprOp2_64 @ 0x1C0019E50 (ExprOp2_64.c)
 *     WriteObject @ 0x1C001B6E0 (WriteObject.c)
 * Callees:
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     GetObjectTypeName @ 0x1C0064F74 (GetObjectTypeName.c)
 */

__int64 __fastcall CopyObjBuffer(void *a1, size_t Size, __int64 a3)
{
  unsigned int v4; // r14d
  unsigned int v5; // esi
  int v7; // r8d
  const void *v8; // rdi
  unsigned int v9; // ebx
  int v11; // r8d
  const void *ObjectTypeName; // rax

  v4 = Size;
  v5 = 0;
  v7 = *(unsigned __int16 *)(a3 + 2) - 1;
  if ( v7 )
  {
    v11 = v7 - 1;
    if ( v11 )
    {
      if ( v11 != 1 )
      {
        LogError(-1072431095);
        AcpiDiagTraceAmlError(0LL, -1072431095);
        ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(a3 + 2));
        PrintDebugMessage(30, ObjectTypeName, 0LL, 0LL, 0LL);
        return (unsigned int)-1072431095;
      }
      v8 = *(const void **)(a3 + 32);
      v9 = *(_DWORD *)(a3 + 24);
    }
    else
    {
      v8 = *(const void **)(a3 + 32);
      v9 = *(_DWORD *)(a3 + 24) - 1;
    }
  }
  else
  {
    v8 = (const void *)(a3 + 16);
    v9 = 8;
  }
  if ( a1 != v8 )
  {
    memset(a1, 0, (unsigned int)Size);
    if ( v4 <= v9 )
      v9 = v4;
    memmove(a1, v8, v9);
  }
  return v5;
}
