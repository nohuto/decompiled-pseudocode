/*
 * XREFs of NtGdiGetMonitorID @ 0x1C0271810
 * Callers:
 *     <none>
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0032BB8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0032BFC (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0062380 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall NtGdiGetMonitorID(HDC a1, SIZE_T Length, void *a3)
{
  SIZE_T v4; // r14
  unsigned int v6; // edi
  _DWORD *v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  DYNAMICMODECHANGESHARELOCK *v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // esi
  _BYTE v14[8]; // [rsp+30h] [rbp-3B8h] BYREF
  _QWORD v15[2]; // [rsp+38h] [rbp-3B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-3A0h] BYREF
  _DWORD v17[212]; // [rsp+60h] [rbp-388h] BYREF

  v4 = (unsigned int)Length;
  v6 = 0;
  memset(v17, 0, 0x348uLL);
  if ( (unsigned int)UserSessionSwitchEnterCrit() )
    return 0LL;
  v15[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v15, a1);
  if ( v15[0] )
  {
    v9 = *(_QWORD *)(v15[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v14);
    if ( (*(_DWORD *)(v9 + 40) & 0x20000) != 0 )
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 1800) + 40LL) + 2576LL);
    else
      v10 = *(_QWORD *)(v9 + 2576);
    if ( v10 )
    {
      *(_QWORD *)&DestinationString.Length = 0LL;
      DestinationString.Buffer = 0LL;
      RtlInitUnicodeString(&DestinationString, (PCWSTR)(v10 + 64));
      v17[0] = 840;
      if ( (int)DrvEnumDisplayDevices(&DestinationString, 0LL, 0LL, v17, 0, 0) >= 0 )
        v6 = 1;
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v15);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v11);
  }
  if ( v6 )
  {
    v8 = &v17[82];
    v12 = -1LL;
    do
      ++v12;
    while ( *((_WORD *)&v17[82] + v12) );
    v13 = 2 * v12 + 2;
    if ( v13 > (unsigned int)v4 )
    {
      v6 = 0;
    }
    else
    {
      ProbeForWrite(a3, v4, 1u);
      memmove(a3, &v17[82], v13);
    }
  }
  UserSessionSwitchLeaveCrit(v8);
  return v6;
}
