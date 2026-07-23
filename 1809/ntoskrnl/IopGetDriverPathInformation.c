/*
 * XREFs of IopGetDriverPathInformation @ 0x14027F0E8
 * Callers:
 *     NtQueryVolumeInformationFile @ 0x14065F620 (NtQueryVolumeInformationFile.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACE70 (KeAcquireQueuedSpinLock.c)
 *     IopVerifyDriverObjectOnStack @ 0x14027F798 (IopVerifyDriverObjectOnStack.c)
 *     ObReferenceObjectByName @ 0x1405C9DA0 (ObReferenceObjectByName.c)
 */

__int64 __fastcall IopGetDriverPathInformation(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // edx
  __int64 result; // rax
  KIRQL v7; // al
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rcx
  _WORD v12[4]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v13; // [rsp+48h] [rbp-10h]
  PVOID Object; // [rsp+68h] [rbp+10h]

  v4 = *(_DWORD *)(a2 + 4);
  if ( a3 - 8 < v4 )
    return 3221225485LL;
  v12[0] = v4;
  v13 = a2 + 8;
  v12[1] = v4;
  result = ObReferenceObjectByName(v12, 64LL, 0LL);
  if ( (int)result >= 0 )
  {
    v7 = KeAcquireQueuedSpinLock(0xAuLL);
    v9 = *(_QWORD *)(a1 + 16);
    LOBYTE(v10) = v7;
    if ( v9 && (v11 = *(_QWORD *)(v9 + 8)) != 0 && (unsigned __int8)IopVerifyDriverObjectOnStack(v11, Object, v8, v10) )
      *(_BYTE *)a2 = 1;
    else
      *(_BYTE *)a2 = IopVerifyDriverObjectOnStack(*(_QWORD *)(a1 + 8), Object, v8, v10);
    KeReleaseQueuedSpinLock(0xAuLL, v10);
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    return 0LL;
  }
  return result;
}
