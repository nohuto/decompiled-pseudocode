/*
 * XREFs of ndisMiniportPostRemoveWoLPattern @ 0x1C0073BB8
 * Callers:
 *     ndisOidPostPMRemoveWOLPattern @ 0x1C0073D70 (ndisOidPostPMRemoveWOLPattern.c)
 *     ndisPostSetRemoveWakeUpPattern @ 0x1C00755A0 (ndisPostSetRemoveWakeUpPattern.c)
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C0035164 (ndisGetOidSourceHandle.c)
 *     ndisGetPatternEffectivePriority @ 0x1C007301C (ndisGetPatternEffectivePriority.c)
 */

void __fastcall ndisMiniportPostRemoveWoLPattern(__int64 a1, __int64 a2)
{
  __int64 OidSourceHandle; // rax
  __int64 v3; // rcx
  __int64 v4; // r10
  __int64 **v5; // r10
  __int64 v6; // r11
  __int64 *v7; // rax
  int v8; // ecx
  __int64 *v9; // r8
  _QWORD *v10; // rdx
  _QWORD *v11; // rcx
  _QWORD *v12; // r9
  int PatternEffectivePriority; // eax
  __int64 v14; // r8

  OidSourceHandle = ndisGetOidSourceHandle(a2);
  v5 = (__int64 **)(v4 + 968);
  v6 = OidSourceHandle;
  v7 = *v5;
  v8 = **(_DWORD **)(v3 + 40);
  if ( *v5 )
  {
    do
    {
      v9 = v7;
      if ( *((_DWORD *)v7 + 49) == v8 )
        break;
      v5 = (__int64 **)v7;
      v9 = 0LL;
      v7 = (__int64 *)*v7;
    }
    while ( v7 );
    if ( v9 )
    {
      v10 = 0LL;
      v11 = v9 + 1;
      if ( v9 != (__int64 *)-8LL )
      {
        do
        {
          v12 = v11 - 1;
          if ( v11[2] == v6 )
            break;
          v10 = v11;
          v12 = 0LL;
          v11 = (_QWORD *)*v11;
        }
        while ( v11 );
        if ( v12 )
        {
          if ( v10 )
          {
            *v10 = *v11;
          }
          else
          {
            if ( !*v11 )
            {
              *v5 = (__int64 *)*v7;
              goto LABEL_15;
            }
            v9 = (__int64 *)(*v11 - 8LL);
            *v5 = v9;
            *v9 = *v7;
          }
          PatternEffectivePriority = ndisGetPatternEffectivePriority((__int64)v9);
          *(_DWORD *)(v14 + 36) = PatternEffectivePriority;
LABEL_15:
          ExFreePoolWithTag(v12, 0);
        }
      }
    }
  }
}
