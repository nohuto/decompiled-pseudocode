/*
 * XREFs of ??1Package_NoThrow@Entity@Cache@StateRepository@@QEAA@XZ @ 0x180429128
 * Callers:
 *     _lambda_0c37c1600930a15155a5eb9c2ae4abb7_::operator() @ 0x180429190 (_lambda_0c37c1600930a15155a5eb9c2ae4abb7_--operator().c)
 * Callees:
 *     <none>
 */

void __fastcall StateRepository::Cache::Entity::Package_NoThrow::~Package_NoThrow(
        StateRepository::Cache::Entity::Package_NoThrow *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = 0LL;
  if ( v2 )
    SRCache_Free();
  v3 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v3 )
    SRCache_Free();
  v4 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = 0LL;
  if ( v4 )
    SRCache_Free();
  v5 = *((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = 0LL;
  if ( v5 )
    SRCache_Free();
}
