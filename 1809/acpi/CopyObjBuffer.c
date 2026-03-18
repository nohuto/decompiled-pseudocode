/*
 * XREFs of CopyObjBuffer @ 0x1C000AA64
 * Callers:
 *     WriteObject @ 0x1C000A8E0 (WriteObject.c)
 *     ExprOp2_64 @ 0x1C0020A30 (ExprOp2_64.c)
 * Callees:
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     GetObjectTypeName @ 0x1C0062FC4 (GetObjectTypeName.c)
 */

__int64 __fastcall CopyObjBuffer(void *a1, size_t Size, __int64 a3, __int64 a4)
{
  unsigned int v5; // r14d
  unsigned int v6; // esi
  int v8; // r8d
  const void *v9; // rdi
  unsigned int v10; // ebx
  __int64 v12; // r8
  int ObjectTypeName; // eax

  v5 = Size;
  v6 = 0;
  v8 = *(unsigned __int16 *)(a3 + 2) - 1;
  if ( v8 )
  {
    v12 = (unsigned int)(v8 - 1);
    if ( (_DWORD)v12 )
    {
      if ( (_DWORD)v12 != 1 )
      {
        LogError(3222536201LL, Size, v12, a4);
        AcpiDiagTraceAmlError(0LL, 3222536201LL);
        ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a3 + 2));
        PrintDebugMessage(30, ObjectTypeName, 0, 0, 0LL);
        return (unsigned int)-1072431095;
      }
      v9 = *(const void **)(a3 + 32);
      v10 = *(_DWORD *)(a3 + 24);
    }
    else
    {
      v9 = *(const void **)(a3 + 32);
      v10 = *(_DWORD *)(a3 + 24) - 1;
    }
  }
  else
  {
    v9 = (const void *)(a3 + 16);
    v10 = 8;
  }
  if ( a1 != v9 )
  {
    memset(a1, 0, (unsigned int)Size);
    if ( v5 <= v10 )
      v10 = v5;
    memmove(a1, v9, v10);
  }
  return v6;
}
