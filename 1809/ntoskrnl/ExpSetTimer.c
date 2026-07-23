/*
 * XREFs of ExpSetTimer @ 0x1401403B8
 * Callers:
 *     NtSetTimer @ 0x140140260 (NtSetTimer.c)
 * Callees:
 *     ExpSetTimerObject @ 0x14001D7C0 (ExpSetTimerObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ExpSetTimerObject2 @ 0x1400FC158 (ExpSetTimerObject2.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall ExpSetTimer(
        void *a1,
        KPROCESSOR_MODE a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        unsigned int a8,
        unsigned int a9,
        _BYTE *a10)
{
  NTSTATUS result; // eax
  unsigned __int64 v14; // rdx
  struct _OBJECT_TYPE *v15; // rax
  PVOID Object; // [rsp+50h] [rbp-18h] BYREF

  result = ObReferenceObjectByHandle(a1, 2u, 0LL, a2, &Object, 0LL);
  if ( result >= 0 )
  {
    v14 = (unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
    v15 = (struct _OBJECT_TYPE *)ObTypeIndexTable[v14];
    if ( v15 == ExpIRTimerObjectType )
    {
      if ( a4 || a5 || a6 || a8 || a9 || a10 )
      {
        ObfDereferenceObjectWithTag(Object, 0x746C6644u);
        return -1073741811;
      }
      else
      {
        return ExpSetTimerObject2(Object, a3, 0LL);
      }
    }
    else if ( v15 == ExTimerObjectType )
    {
      LOBYTE(v14) = a2;
      return ExpSetTimerObject((ULONG_PTR)Object, v14, a3, a4, a5, a6, a7, a8, a9, a10);
    }
    else
    {
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      return -1073741788;
    }
  }
  return result;
}
