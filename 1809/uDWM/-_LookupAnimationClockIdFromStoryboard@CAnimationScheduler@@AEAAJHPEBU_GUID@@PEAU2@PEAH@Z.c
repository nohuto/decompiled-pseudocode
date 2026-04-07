/*
 * XREFs of ?_LookupAnimationClockIdFromStoryboard@CAnimationScheduler@@AEAAJHPEBU_GUID@@PEAU2@PEAH@Z @ 0x18002F120
 * Callers:
 *     ?_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z @ 0x18002EE48 (-_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationScheduler::_LookupAnimationClockIdFromStoryboard(
        CAnimationScheduler *this,
        int a2,
        const struct _GUID *a3,
        struct _GUID *a4,
        int *a5)
{
  unsigned int v5; // ecx
  int v8; // r8d
  _DWORD *i; // rdx
  __int64 v11; // rax
  __int64 v12; // rax

  v5 = 0;
  *a4 = GUID_NULL;
  if ( a5 )
    *a5 = 1;
  v8 = 0;
  for ( i = dword_1800D4370; ; i += 10 )
  {
    if ( *i == a2 )
    {
      v11 = *(_QWORD *)&dword_1800D4370[10 * v8 + 1] - *(_QWORD *)&GUID_NULL.Data1;
      if ( !v11 )
        v11 = *(_QWORD *)&dword_1800D4370[10 * v8 + 3] - *(_QWORD *)GUID_NULL.Data4;
      if ( !v11 )
        break;
      if ( a3 )
      {
        v12 = *(_QWORD *)&dword_1800D4370[10 * v8 + 1] - *(_QWORD *)&a3->Data1;
        if ( !v12 )
          v12 = *(_QWORD *)&dword_1800D4370[10 * v8 + 3] - *(_QWORD *)a3->Data4;
        if ( !v12 )
          break;
      }
    }
    if ( (unsigned int)++v8 >= 0xB )
      return (unsigned int)CoCreateGuid(a4);
  }
  *a4 = *(struct _GUID *)&dword_1800D4370[10 * v8 + 5];
  if ( a5 )
    *a5 = dword_1800D4370[10 * v8 + 9];
  return v5;
}
