/*
 * XREFs of HandleSystemThreadCreationFailure @ 0x1C00E4C20
 * Callers:
 *     <none>
 * Callees:
 *     ?CSTPop@@YAHPEAIPEAPEAX@Z @ 0x1C0060AF8 (-CSTPop@@YAHPEAIPEAPEAX@Z.c)
 */

__int64 __fastcall HandleSystemThreadCreationFailure(__int64 a1)
{
  struct _KEVENT *v1; // rcx
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF
  void *v4; // [rsp+38h] [rbp+10h] BYREF

  if ( (PVOID)PsGetCurrentProcess(a1) == gpepCSRSS )
  {
    if ( (unsigned int)CSTPop(&v3, &v4) )
    {
      if ( v3 == 4 )
      {
        v1 = (struct _KEVENT *)*((_QWORD *)v4 + 1);
        if ( v1 )
          KeSetEvent(v1, 1, 0);
      }
    }
  }
  return 1LL;
}
