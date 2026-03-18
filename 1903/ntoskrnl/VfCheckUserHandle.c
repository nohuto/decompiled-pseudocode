/*
 * XREFs of VfCheckUserHandle @ 0x140977664
 * Callers:
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FA4A0 (ObpReferenceObjectByHandleWithTag.c)
 *     NtClose @ 0x1405FAB20 (NtClose.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140017170 (RtlCaptureStackBackTrace.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     RtlEqualUnicodeString @ 0x140653D20 (RtlEqualUnicodeString.c)
 *     ObQueryTypeName @ 0x14089F15C (ObQueryTypeName.c)
 *     VfUtilIsLocalSystem @ 0x1409645C0 (VfUtilIsLocalSystem.c)
 *     VfDriverIsKernelImageAddress @ 0x140966648 (VfDriverIsKernelImageAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x14096E604 (VerifierBugCheckIfAppropriate.c)
 *     VfTargetDriversIsEnabled @ 0x1409740A8 (VfTargetDriversIsEnabled.c)
 */

void __fastcall VfCheckUserHandle(ULONG_PTR BugCheckParameter2)
{
  struct _KPROCESS *Process; // rbx
  USHORT v3; // ax
  unsigned int v4; // ebp
  __int64 v5; // rdi
  unsigned __int64 *v6; // r14
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  char v9; // si
  PVOID Object; // [rsp+30h] [rbp-B8h] BYREF
  int v11; // [rsp+38h] [rbp-B0h] BYREF
  PVOID BackTrace[8]; // [rsp+40h] [rbp-A8h] BYREF
  UNICODE_STRING String1; // [rsp+80h] [rbp-68h] BYREF

  if ( (MmVerifierData & 0x100) != 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( PsInitialSystemProcess )
    {
      if ( Process != PsInitialSystemProcess && Process != PsIdleProcess )
      {
        if ( BugCheckParameter2 )
        {
          v3 = RtlCaptureStackBackTrace(2u, 8u, BackTrace, 0LL);
          v4 = v3;
          v5 = 0LL;
          if ( v3 )
          {
            v6 = (unsigned __int64 *)BackTrace;
            do
            {
              v7 = *v6;
              if ( VfDriverIsKernelImageAddress(*v6) )
              {
                if ( KernelVerifier )
                  break;
              }
              else
              {
                if ( (unsigned int)VfTargetDriversIsEnabled(v8) )
                  break;
                if ( !ViDriverXDVBase
                  || !ViDriverXDVImageSize
                  || v7 < ViDriverXDVBase
                  || v7 >= ViDriverXDVBase + (unsigned __int64)(unsigned int)ViDriverXDVImageSize )
                {
                  return;
                }
              }
              v5 = (unsigned int)(v5 + 1);
              ++v6;
            }
            while ( (unsigned int)v5 < v4 );
            if ( (unsigned int)v5 < v4 && !(unsigned int)VfUtilIsLocalSystem(Process) )
            {
              if ( ObReferenceObjectByHandle((HANDLE)BugCheckParameter2, 0, 0LL, 1, &Object, 0LL) < 0 )
                goto LABEL_25;
              v9 = 0;
              if ( (int)ObQueryTypeName((__int64)Object, (__int64)&String1, 0x40u, &v11) >= 0
                && (RtlEqualUnicodeString(&String1, &ViDesktopTypeName, 0)
                 || RtlEqualUnicodeString(&String1, &ViWindowStationTypeName, 0)) )
              {
                v9 = 1;
              }
              ObfDereferenceObject(Object);
              if ( !v9 )
              {
LABEL_25:
                if ( ViHandleBreaksEnabled )
                  VerifierBugCheckIfAppropriate(
                    0xC4u,
                    0xF6uLL,
                    BugCheckParameter2,
                    (ULONG_PTR)Process,
                    (__int64)BackTrace[v5]);
              }
            }
          }
        }
      }
    }
  }
}
