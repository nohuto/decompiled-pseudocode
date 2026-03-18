/*
 * XREFs of HandleSystemThreadCreationFailure @ 0x1C010AEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?CSTPop@@YAHPEAIPEAPEAX@Z @ 0x1C00A2CC4 (-CSTPop@@YAHPEAIPEAPEAX@Z.c)
 */

__int64 __fastcall HandleSystemThreadCreationFailure(__int64 a1, __int64 a2)
{
  struct _KEVENT *v2; // rcx
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF
  void *v5; // [rsp+38h] [rbp+10h] BYREF

  if ( (PVOID)PsGetCurrentProcess(a1, a2) == gpepCSRSS )
  {
    if ( (unsigned int)CSTPop(&v4, &v5) )
    {
      if ( v4 == 4 )
      {
        v2 = (struct _KEVENT *)*((_QWORD *)v5 + 1);
        if ( v2 )
          KeSetEvent(v2, 1, 0);
      }
    }
  }
  return 1LL;
}
