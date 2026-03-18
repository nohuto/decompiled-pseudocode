/*
 * XREFs of PopBcdSetupResumeObject @ 0x14073F84C
 * Callers:
 *     PopBcdSetPendingResume @ 0x140726D84 (PopBcdSetPendingResume.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14073C630 (PopBcdSetDefaultResumeObjectElements.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     BcdSetElementDataWithFlags @ 0x14073D70C (BcdSetElementDataWithFlags.c)
 */

__int64 __fastcall PopBcdSetupResumeObject(void *a1)
{
  unsigned int v1; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v4; // rdi
  __int64 v5; // r8
  int v6; // ebx
  __int64 v7; // r8
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v1 = IoArcBootDeviceName.Length + 22;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v1, 0x64634250u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v1);
    *v4 = 2;
    memmove(v4 + 5, IoArcBootDeviceName.Buffer, IoArcBootDeviceName.Length);
    v6 = BcdSetElementDataWithFlags(a1, 0x21000001u, v5, (__int64)v4, v1);
    if ( v6 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\hiberfil.sys");
      v6 = BcdSetElementDataWithFlags(
             a1,
             0x22000002u,
             v7,
             (__int64)DestinationString.Buffer,
             (unsigned int)DestinationString.Length + 2);
    }
    ExFreePoolWithTag(v4, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v6;
}
