/*
 * XREFs of rimObsObserveNextInput @ 0x1C01053C8
 * Callers:
 *     NtRIMObserveNextInput @ 0x1C00DF730 (NtRIMObserveNextInput.c)
 *     RIMObserveNextInput @ 0x1C00E3490 (RIMObserveNextInput.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     RawInputManagerInputObserverObjectResolveHandle @ 0x1C00F2038 (RawInputManagerInputObserverObjectResolveHandle.c)
 *     rimObsPopInputMessage @ 0x1C010547C (rimObsPopInputMessage.c)
 */

__int64 __fastcall rimObsObserveNextInput(char *a1, __int64 a2)
{
  unsigned int v2; // ebp
  int v3; // ebx
  unsigned int *v4; // rdi
  char *v5; // rsi
  int v6; // eax
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  Object = 0LL;
  v2 = a2;
  v3 = RawInputManagerInputObserverObjectResolveHandle(a1, a2, a2, &Object);
  if ( v3 >= 0 )
  {
    v4 = (unsigned int *)Object;
    v5 = (char *)Object + 168;
    RIMLockExclusive((__int64)Object + 168);
    v6 = rimObsPopInputMessage(v4, v2, *((_QWORD *)v4 + 11), v4[24]);
    v3 = v6;
    if ( v6 < 0 )
    {
      if ( v6 == -2147483622 )
      {
        v4[20] = 1;
        v3 = 0;
      }
    }
    else
    {
      ZwSetEvent(*((HANDLE *)v4 + 9), 0LL);
    }
    *((_QWORD *)v5 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v4);
  }
  return (unsigned int)v3;
}
