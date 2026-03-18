/*
 * XREFs of EnableDisableCMOSRegions @ 0x1C0016140
 * Callers:
 *     EnableDisableCMOSRegions @ 0x1C0016140 (EnableDisableCMOSRegions.c)
 *     ACPITableLoad @ 0x1C0024FF0 (ACPITableLoad.c)
 * Callees:
 *     HeapFree @ 0x1C0001FAC (HeapFree.c)
 *     DereferenceObjectEx @ 0x1C00038B0 (DereferenceObjectEx.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C00140BC (AMLIAsyncEvalObject.c)
 *     EnableDisableCMOSRegions @ 0x1C0016140 (EnableDisableCMOSRegions.c)
 *     AMLIGetFirstChild @ 0x1C00162A8 (AMLIGetFirstChild.c)
 *     AMLIIsNamedChildPresent @ 0x1C001ED60 (AMLIIsNamedChildPresent.c)
 *     AMLIGetNamedChild @ 0x1C00207C0 (AMLIGetNamedChild.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall EnableDisableCMOSRegions(__int64 a1, unsigned __int8 a2)
{
  unsigned int v3; // ebp
  volatile signed __int32 *Child; // rdi
  __int16 v6; // ax
  KIRQL v7; // dl
  __int64 v8; // rax
  __int64 v9; // rbx
  volatile signed __int32 *v10; // rbx
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // rbx
  int v17; // esi
  __int64 *v18; // rcx
  _QWORD v19[15]; // [rsp+30h] [rbp-78h] BYREF

  v3 = 0;
  Child = (volatile signed __int32 *)AMLIGetFirstChild();
  if ( Child )
  {
    do
    {
      v6 = *(_WORD *)(*(_QWORD *)Child + 66LL);
      if ( v6 == 6 )
      {
        v12 = EnableDisableCMOSRegions(Child, a2);
        if ( v12 < 0 )
          v3 = v12;
      }
      else if ( v6 == 10 )
      {
        v13 = *(_QWORD *)(*(_QWORD *)Child + 96LL);
        if ( v13 )
        {
          if ( *(_BYTE *)(v13 + 12) == 5 )
          {
            if ( (unsigned __int8)AMLIIsNamedChildPresent(a1, 1145653343LL) )
            {
              v16 = (__int64 *)AMLIGetNamedChild(a1, 1195725407LL, v14, v15);
              if ( v16 )
              {
                memset(v19, 0, 0x50uLL);
                WORD1(v19[0]) = 1;
                v19[2] = 5LL;
                WORD1(v19[5]) = 1;
                v19[7] = a2;
                v17 = AMLIAsyncEvalObject(v16, 0LL, 2u, v19, 0LL, 0LL);
                AMLIDereferenceHandleEx((__int64)v16);
                if ( v17 < 0 )
                  v3 = v17;
              }
            }
          }
        }
      }
      v7 = ExAcquireSpinLockShared(&ACPINamespaceLock);
      v8 = *(_QWORD *)(*(_QWORD *)Child + 16LL);
      if ( !v8 || (v9 = **(_QWORD **)Child, v9 == v8 + 24) )
      {
        v10 = 0LL;
      }
      else
      {
        v10 = (volatile signed __int32 *)(v9 + 120);
        dword_1C0080868 = 0;
        pszDest = 0;
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedIncrement(v10 + 2);
      }
      ExReleaseSpinLockShared(&ACPINamespaceLock, v7);
      dword_1C0080868 = 0;
      pszDest = 0;
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd(Child + 2, 0xFFFFFFFF) == 1 )
      {
        v18 = *(__int64 **)Child;
        if ( Child == (volatile signed __int32 *)(*(_QWORD *)Child + 120LL) )
        {
          DereferenceObjectEx((unsigned __int64)v18);
        }
        else
        {
          DereferenceObjectEx((unsigned __int64)v18);
          HeapFree(Child);
        }
      }
      Child = v10;
    }
    while ( v10 );
  }
  return v3;
}
