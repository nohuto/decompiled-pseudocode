/*
 * XREFs of AreDependenciesSatisfied @ 0x1C002DEE0
 * Callers:
 *     ACPIBuildProcessDelayedDependencyShouldDelayRequest @ 0x1C002DE34 (ACPIBuildProcessDelayedDependencyShouldDelayRequest.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C001A858 (AMLIGetNameSpaceObject.c)
 */

bool __fastcall AreDependenciesSatisfied(__int64 *a1, __int64 a2)
{
  _DWORD *v2; // rsi
  unsigned int v3; // ebx
  unsigned int v5; // edi
  _BYTE **v7; // rsi
  __int64 v8; // rbp
  volatile signed __int32 *v9; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_DWORD **)(a2 + 32);
  v3 = 0;
  v5 = *v2;
  if ( *v2 )
  {
    v7 = (_BYTE **)(v2 + 10);
    do
    {
      if ( (int)AMLIGetNameSpaceObject(*v7, a1, (unsigned __int64 *)&v9, 0) < 0 )
        break;
      v8 = *(_QWORD *)(*(_QWORD *)v9 + 104LL);
      AMLIDereferenceHandleEx(v9);
      if ( !v8 )
        break;
      if ( *(_DWORD *)(v8 + 320) != 3 )
        break;
      ++v3;
      v7 += 5;
    }
    while ( v3 < v5 );
  }
  return v3 == v5;
}
