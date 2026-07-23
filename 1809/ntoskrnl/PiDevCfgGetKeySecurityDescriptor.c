/*
 * XREFs of PiDevCfgGetKeySecurityDescriptor @ 0x140706DB8
 * Callers:
 *     PiDevCfgCopyDeviceKey @ 0x1406F3F74 (PiDevCfgCopyDeviceKey.c)
 * Callees:
 *     RtlLengthSid @ 0x1400162C0 (RtlLengthSid.c)
 *     memcmp @ 0x140196340 (memcmp.c)
 *     ZwQuerySecurityObject @ 0x1401BAD70 (ZwQuerySecurityObject.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlGetControlSecurityDescriptor @ 0x1405BA5F0 (RtlGetControlSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x1406CD310 (RtlGetGroupSecurityDescriptor.c)
 */

__int64 __fastcall PiDevCfgGetKeySecurityDescriptor(HANDLE Handle, _QWORD *a2)
{
  NTSTATUS ControlSecurityDescriptor; // ebx
  PVOID PoolWithTag; // rdi
  PSID v6; // rbx
  ULONG v7; // eax
  size_t v8; // rsi
  NTSTATUS v10; // eax
  WORD Control; // [rsp+68h] [rbp+38h] BYREF
  ULONG Length; // [rsp+70h] [rbp+40h] BYREF
  PSID Revision; // [rsp+78h] [rbp+48h] BYREF

  *a2 = 0LL;
  ControlSecurityDescriptor = ZwQuerySecurityObject(Handle, 6u, 0LL, 0, &Length);
  if ( (int)(ControlSecurityDescriptor + 0x80000000) < 0 || ControlSecurityDescriptor == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x63647050u);
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    ControlSecurityDescriptor = ZwQuerySecurityObject(Handle, 6u, PoolWithTag, Length, &Length);
    if ( ControlSecurityDescriptor >= 0 )
    {
      ControlSecurityDescriptor = RtlGetControlSecurityDescriptor(PoolWithTag, &Control, (PULONG)&Revision);
      if ( ControlSecurityDescriptor >= 0 )
      {
        if ( (Control & 4) != 0 )
        {
          ControlSecurityDescriptor = RtlGetGroupSecurityDescriptor(PoolWithTag, &Revision, (PBOOLEAN)&Control);
          if ( ControlSecurityDescriptor >= 0 )
          {
            v6 = Revision;
            if ( Revision )
            {
              v7 = RtlLengthSid(Revision);
              v8 = v7;
              Length = v7;
              if ( v7 == RtlLengthSid(PiDevCfgNullSid) && !memcmp(v6, PiDevCfgNullSid, v8) )
              {
                v10 = ZwQuerySecurityObject(Handle, 4u, PoolWithTag, v8, &Length);
                ControlSecurityDescriptor = v10;
                if ( v10 != -1073741789 )
                  goto LABEL_21;
                ExFreePoolWithTag(PoolWithTag, 0);
                PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x63647050u);
                if ( PoolWithTag )
                {
                  v10 = ZwQuerySecurityObject(Handle, 4u, PoolWithTag, Length, &Length);
                  ControlSecurityDescriptor = v10;
LABEL_21:
                  if ( v10 >= 0 )
                  {
                    *a2 = PoolWithTag;
                    return (unsigned int)ControlSecurityDescriptor;
                  }
                  goto LABEL_10;
                }
                return (unsigned int)-1073741670;
              }
              ControlSecurityDescriptor = -1073741720;
            }
            else
            {
              ControlSecurityDescriptor = -1073741722;
            }
          }
        }
        else
        {
          ControlSecurityDescriptor = -1073741275;
        }
      }
    }
LABEL_10:
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  return (unsigned int)ControlSecurityDescriptor;
}
