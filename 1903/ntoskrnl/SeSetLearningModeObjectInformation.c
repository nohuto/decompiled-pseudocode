/*
 * XREFs of SeSetLearningModeObjectInformation @ 0x14003B710
 * Callers:
 *     RtlpAllowsLowBoxAccess @ 0x14013322C (RtlpAllowsLowBoxAccess.c)
 *     ObReferenceObjectByName @ 0x1405C6850 (ObReferenceObjectByName.c)
 *     ObOpenObjectByNameEx @ 0x1405F48D0 (ObOpenObjectByNameEx.c)
 *     ObpLookupObjectName @ 0x1405F5EE0 (ObpLookupObjectName.c)
 *     ObReferenceObjectByNameEx @ 0x14069B140 (ObReferenceObjectByNameEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyW @ 0x140099C00 (RtlStringCbCopyW.c)
 *     RtlStringCbCatW @ 0x140099E20 (RtlStringCbCatW.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SepGetCurrentLogLevel @ 0x14031D7F8 (SepGetCurrentLogLevel.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     ObQueryNameString @ 0x140627DC0 (ObQueryNameString.c)
 */

void __fastcall SeSetLearningModeObjectInformation(__int64 a1)
{
  void *v2; // rcx
  _OBJECT_NAME_INFORMATION *PoolWithTag; // rax
  _OBJECT_NAME_INFORMATION *v4; // rdi
  NTSTATUS v5; // eax
  _OBJECT_NAME_INFORMATION *v6; // rax
  SIZE_T v7; // r15
  wchar_t *v8; // rax
  wchar_t *v9; // rsi
  __int64 v10; // rcx
  ULONG ReturnLength; // [rsp+58h] [rbp+10h] BYREF
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  if ( byte_14046BEAC )
  {
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
    v2 = *(void **)(a1 + 32);
    if ( !v2 || ObReferenceObjectByHandle(v2, 0, 0LL, KeGetCurrentThread()->PreviousMode, &Object, 0LL) < 0 )
      goto LABEL_16;
    PoolWithTag = (_OBJECT_NAME_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x210uLL, 0x4F526553u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      v5 = ObQueryNameString(Object, PoolWithTag, 0x210u, &ReturnLength);
      if ( v5 != -1073741820 )
        goto LABEL_8;
      ExFreePoolWithTag(v4, 0);
      v6 = (_OBJECT_NAME_INFORMATION *)ExAllocatePoolWithTag(PagedPool, ReturnLength, 0x4F526553u);
      v4 = v6;
      if ( v6 )
      {
        v5 = ObQueryNameString(Object, v6, ReturnLength, &ReturnLength);
LABEL_8:
        if ( v5 >= 0 )
        {
          if ( v4->Name.Buffer )
          {
            v7 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 2LL) + 2LL + v4->Name.MaximumLength;
            v8 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v7, 0x4F526553u);
            v9 = v8;
            if ( v8 )
            {
              memset(v8, 0, v7);
              RtlStringCbCopyW(v9, v7, v4->Name.Buffer);
              if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) )
              {
                RtlStringCbCatW(v9, v7, L"\\");
                RtlStringCbCatW(v9, v7, *(NTSTRSAFE_PCWSTR *)(*(_QWORD *)(a1 + 24) + 8LL));
              }
              RtlInitUnicodeString((PUNICODE_STRING)(a1 + 40), v9);
            }
          }
        }
        ExFreePoolWithTag(v4, 0);
      }
    }
    ObfDereferenceObject(Object);
LABEL_16:
    *(_DWORD *)(a1 + 8) = SepGetCurrentLogLevel(KeGetCurrentThread());
    *(_QWORD *)a1 = *(_QWORD *)(v10 + 1904);
    *(_QWORD *)(v10 + 1904) = a1;
  }
}
